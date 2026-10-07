#include <iostream>
#include <string>

int evaluate(int count, std::string expr[]) {
    int result = std::stoi(expr[0]);
    for (int i = 1; i < count-1; i+=2) {
        int num = std::stoi(expr[i+1]);
        if (expr[i] == "+") result += num;
        else if (expr[i] == "-") result -= num;
        else {
            std::cout << "invalid op " << expr[i] << std::endl;
            return result;
        }
    }
    return result;
}

int main(int argc, char *argv[]) {
    std::string expr[argc-1];
    for (int i = 1; i < argc; i++) expr[i-1] = argv[i];
    int result = evaluate(argc-1, expr);
    std::cout << "final result " << result << std::endl;
}
