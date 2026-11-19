#include <stdio.h>

void printNum(int i) {
    int count = 0;
    printf("calling with %d count %d\n", i, count);
    count += i;
    if (i == 0) {
        return;
    }
    printf("before recurse %d\n", i);
    printNum(i-1);
    printf("after recurse %d count %d\n", i, count);
}

int main(void) {
//    for (int i = 0; i < 10; i++) {
        //printf("loop %d\n", i);
    //}
    printNum(5);
}
