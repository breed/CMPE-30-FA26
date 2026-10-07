#include <iostream>
#include <print>
#include <format>

int main() {
    std::string hello{"hello world"};
    std::string shrt{"hw"};
    int j {3};
    double d {3.1415};
    std::cout << std::format("str {0:.4} {0:4} {0:*^.4} {0:*^4}", hello) << std::endl;
    std::cout << std::format("str {0:.4} {0:4} {0:*^.4} {0:*^4}", shrt) << std::endl;
    std::println("str {0:.4} {0:4} {0:*^.4} {0:*^4}", hello);
    for (int i = 0; i < 10; i++) {
        std::println("|{0:*^4}|{1:4}|{2:7.3}|{0:*<4}|", i, j, d);
        std::println("|{0:*^4}|{1:4}|{2:07.3}|{0:*<4}|", i, j, d);
        std::println("|{0:*^4}|{1:4}|{2:^7.3}|{0:*<4}|", i, j, d);
//        std::println("|{0:*^4}|{1:4}|{2:*^3.3}|{0:*<4}|", i, j, d);
    }
}
