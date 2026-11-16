#include <stdio.h>

int printNum(int i) {
    printf("recurse %d\n", i);
    printNum(i-1);
}

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("loop %d\n", i);
    }
    printNum(10);
}
