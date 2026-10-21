#include <iostream>

#include "local.hpp"
#include "sclass.hpp"

static int local_count = 0;

int *list_of_numbers(int size) {
    int list[size];
    for (int i = 0; i < size; i++) {
        list[i] = (i*3)%5;
    }
    return list;
}

void recurse(int i) {
    if (i == 0) return;
    std::cout << "calling foo from recurse(" << i << ")" << std::endl;
    foo();
    recurse(i-1);
}

int main() {
    std::cout << "calling foo from main" << std::endl;
    foo();
    std::cout << "calling foo again from main" << std::endl;
    foo();
    recurse(5);

    std::cout << "sclass::count++ = " << sclass::count++ << std::endl;
    inc_scount();
    std::cout << "sclass::count++ = " << sclass::count++ << std::endl;

    auto list = list_of_numbers(10);

    for (int i = 0; i < 10; i++) {
        std::cout << "list[" << i << "] = " << list[i] << std::endl;
    }
}
