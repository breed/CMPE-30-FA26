#include <iostream>
#include <sstream>
#include <string>

std::string incAndEmph(const std::string &s) {
    int i;
    std::string w;
    std::istringstream sin{s};
    sin >> i >> w;
    i++;

    std::ostringstream sout;
    sout << std::hex << i << " " << w << "!";
    return sout.str();
}

int main() {
    std::string myStr{"31 times"};

    auto newMyStr = incAndEmph(myStr);
    std::cout << "Before: " << myStr << std::endl;
    std::cout << "After: " << newMyStr << std::endl;
}
