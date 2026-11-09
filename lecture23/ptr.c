#include <stdio.h>

int main() {
    int score = 100;
    int *p = &score;
    int **q = &p;
    printf("p is %p score is %d address of score %p\n", p, score, &score);
    printf("q is %p @ %p\n", q, &q);
    printf("p is %p but *p is %p\n", p, *p);
}
