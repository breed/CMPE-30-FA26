#include <stdio.h>

void printNum(int i) {
    printf("calling with %d\n", i);
    if (i == 0) {
        return;
    }
    printf("before recurse %d\n", i);
    printNum(i-1);
    printf("after recurse %d\n", i);
}

int main(void) {
//    for (int i = 0; i < 10; i++) {
        //printf("loop %d\n", i);
    //}
    printNum(5);
}
