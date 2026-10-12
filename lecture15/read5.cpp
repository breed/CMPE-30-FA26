#include <iostream>
#include <fstream>

int sum1st5(std::ifstream &in) {
    int total = 0;

    for (int i = 0; i < 5; i++) {
        int num;
        in >> num;
        total += num;
    }
    return total;
}

int main(int argc, char **argv) {
    auto in = std::ifstream{argv[1]};
    std::cout << sum1st5(in) << std::endl;
}
