#include <iostream>

int main() {
    while(false) {
        int i = 3;
        std::cout << "hi " << "\n";
        if (i == 4) break;
        std::cout << "i is " << i << "\n";
        if ( i > 4) break;
        std::cout << "i is less than 4\n";
    }
}
