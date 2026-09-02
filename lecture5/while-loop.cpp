// count to 10
#include <iostream>

int main() {
    int i = 0;
    /*
    while (i % 2 != 0 || i % 13 != 0 || i == 0) {
       if (i % 2 == 0) {
            std::cout << "i is " << i << "\n";
           // if (i % 13 == 0 && i != 0) {
           //     break;
           // }
       }
        i = i + 1;
    }

    i = 0;
    while (true) {
        if (i % 2 == 0) {
            std::cout << "i is " << i << "\n";
            if (i % 13 == 0 && i != 0) {
                 break;
            }
        }
        i++;
    }
    */
    i = 0;
    do {
        if (i % 2 == 0) {
            std::cout << "i is " << i << "\n";
            if (i % 13 == 0 && i != 0) {
                continue;
            }
        }
        i++;
    } while (true);

    return 0;

    int score = 85;
    if (score >= 90)
        std::cout << "Excelente!\n";
    // std::cout << "your the best!\n";
    else
        std::cout << "you'll do better next time\n";
    if (score >= 70) {
        std::cout << "C\n";
    } else if (score >= 80) {
        std::cout << "B\n";
    } else if (score >= 90) {
        std::cout << "A\n";
    } else {
        std::cout << "Try again\n";
    }

}