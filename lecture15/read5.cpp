#include <fstream>

int sum1st5(std::istream &in) {
    int total = 0;

    for (int i = 0; i < 5; i++) {
        int num;
        in >> num;
        total += num;
    }
    return total;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << argv[0] << " filename\n";
        return 1;
    }
    auto in = std::ifstream{argv[1]};
    std::cout << sum1st5(in) << std::endl;
}
