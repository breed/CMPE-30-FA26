#include <iostream>
#include <vector>

void print_list(const std::string &label, const std::vector<std::string> &list) {
    std::cout << "doing " << label << std::endl;
    for (int i = 0; i < list.size(); i++) {
        std::cout << list[i] << std::endl;
    }
    std::cout << std::endl;
}

void print_list(const std::string &label,
                std::vector<std::string>::iterator begin,
                std::vector<std::string>::iterator end
                ) {
    std::cout << "doing " << label << std::endl;
    for (auto it = begin; it != end; it++) {
        std::cout << it << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<std::string> lista =
        {"Creep", "No Rain", "Linger"};
    print_list("init", lista);
    std::cout << "front " << lista.front() << std::endl;
    //std::cout << "front " << (lista.front() + 1) << std::endl;
    lista.insert(
        lista.begin() + 1,
        "Possum Kingdom");
    print_list("after insert", lista, lista.size() - 1);
    lista.erase(lista.begin());
    print_list("after erase", lista.begin()+1, lista.end()-1);
}
