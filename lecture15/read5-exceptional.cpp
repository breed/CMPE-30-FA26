#include <iostream>
#include <fstream>

int sum1st5(std::istream &in) {
    int total = 0;

    for (int i = 0; i < 5; i++) {
        std::string s;
        try {
            in >> s;
            int num = std::stoi(s);
            total += num;
        } catch (std::invalid_argument &e) {
            std::cout << "Couldn't convert " << s << ". Skipping. " << e.what() << std::endl;
            continue;
        }
    }
    return total;
}

int main(int argc, char **argv) {
    auto in = std::ifstream{argv[1]};
    in.exceptions(std::fstream::failbit | std::fstream::eofbit | std::fstream::badbit);
    try {
        std::cout << sum1st5(in) << std::endl;
    } catch (std::fstream::failure &e) {
        std::cout << "Oops. We need 5 numbers at the beginning of " << argv[1] << ". " << e.what() << std::endl;
    }
}
