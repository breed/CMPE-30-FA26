#include <iostream>
#include "music.hpp"

int main() {
    Song s1 {"I love Rock and Roll", "Joan Jett", 1981};
    auto s2 = s1;
    s2.setYear(1989);
    auto s3 = s1;
    s3.setYear(2020);
    std::cout << ++s1 << " " << s1++ <<  " " << ~s1 << std::endl;
    std::cout << ++s2 << " " << s2++ <<  " " << ~s2 << std::endl;
    std::cout << ++s3 << " " << s3++ <<  " " << ~s3 << std::endl;
}
