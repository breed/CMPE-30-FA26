#include <iostream>

int main() {
    int i {57};
    double d {500000.0};
    bool t {true};
    std::cout << std::hex << i << " t is " << std::boolalpha << t << std::endl;
    std::cout << std::fixed << d << std::endl;
    std::cout << d*d << std::endl;

}
