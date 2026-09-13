#include <iostream>

int main() {
    int i = 5;
    for (;;i++) {
        std::cout << i <<  " Ben is cool\n";
    }
    for (int i = 0;i < 10;i++) {
        std::cout << "Ken is cool\n";
    }
    std::cout << "i = " << i << "\n";
}
