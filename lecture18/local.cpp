#include <iostream>

#include "local.hpp"

static int local_count = 0;

void foo() {
    int local_var;
    std::cout << "local var is at " << &local_var << std::endl;
}
