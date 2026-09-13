#include <iostream>
int main() {
    int total = 0;
    for (int i = 0; i < 10; i++) std::cout << i << std::endl;
    {
        int i = 3;
        std::cout << "total = " << total;
        total = total + i;
    }
}
