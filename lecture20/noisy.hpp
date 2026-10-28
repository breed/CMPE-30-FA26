#pragma once

#include <iostream>

struct Noisy {
    Noisy() {
        std::cout << "Creating Noisy " << this << std::endl;
    }

    Noisy(const Noisy &n) {
        std::cout << "Copying Noisy " << this << std::endl;
    }

    ~Noisy() {
        std::cout << "Destroying Noisy " << this << std::endl;
    }

    int i{3};
};
