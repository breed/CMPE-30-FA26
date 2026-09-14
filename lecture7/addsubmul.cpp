#include <iostream>
#include <string>

int evaluate(int ind, int count, std::string expr[], bool negate = false) {
    int num1 = std::stoi(expr[ind]);
    if (negate) num1 = -num1;

    // the loop is just for multiplication. +- will recurse
    while (true) {
        ind++;
        // base case
        if (ind == count) return num1;

        if (expr[ind] == "+") return num1 + evaluate(ind+1, count, expr);
        else if (expr[ind] == "-") return num1 + evaluate(ind+1, count, expr, true);
        else if (expr[ind] == "x") {
            // multiplication can be evaluated right away because of order of operations
            ind++;
            num1 *= std::stoi(expr[ind]);
        } else {
            std::cout << ind << "invalid op " << expr[ind] << std::endl;
            return num1;
        }
    }
}

int main(int argc, char *argv[]) {
    std::string expr[argc-1];
    for (int i = 1; i < argc; i++) expr[i-1] = argv[i];
    int result = evaluate(0, argc-1, expr);
    std::cout << "final result " << result << std::endl;
}
