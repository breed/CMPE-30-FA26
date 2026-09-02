#include <iostream>

int main() {
    int i = 0;
    std::cout << "i is " << i << std::endl;
    i = i + 1;
    std::cout << "i is " << i << std::endl;
    i += 3;
    std::cout << "i is " << i << std::endl;
    i++;
    std::cout << "i is " << i << std::endl;
    ++i;
    std::cout << "i is " << i << std::endl;
    int j = i++;
    std::cout << "i is " << i << " j is " << j << std::endl;
    j = ++i;
    std::cout << "i is " << i << " j is " << j << std::endl;
}