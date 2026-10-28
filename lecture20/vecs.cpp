#include <iostream>
#include <vector>
#include "noisy.hpp"

int main() {
    std::vector<Noisy> v;
    for (int i = 0; i < 9; i++) {
        std::cout << "-------\n";
        v.push_back(Noisy{});
    }
}
