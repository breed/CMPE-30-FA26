#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "USAGE: " << argv[0] << " name\n";
        return 1;
    }
    std::cout << "Hello " << argv[1] << "\n";
}
