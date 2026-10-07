#include <iostream>
#include <fstream>
#include <string>

int main() {
    int i{0};
    std::ifstream fin{"file.in"};
    std::ofstream fout{"file.out", std::ios::app};
    if (!fin) {
        std::cerr << "Couldn't open file.in\n";
        return 2;
    }
    if (!fout) {
        std::cerr << "Couldn't open file.out\n";
        return 2;
    }

    int total{0};

    while(fin >> i) {
        total += i;
        std::cout << "got " << i << " total " << total << std::endl;
    }
    fout << total << "\n";
}
