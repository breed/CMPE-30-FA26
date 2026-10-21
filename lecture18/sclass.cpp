#include <iostream>
#include "sclass.hpp"

int sclass::count = 0;

void inc_scount() {
    std::cout << "from inc_scount sclass::count++ = " << sclass::count++ << std::endl;
}
