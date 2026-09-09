#include <iostream>
#include <string>

int main() {
    std::string s;
    while (!std::cin.eof()) {
        std::cin >> s;
        std::cout << s << "\n";
    }
}
