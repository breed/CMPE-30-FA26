#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number: ");
    int rc = scanf("%d", &num);
    printf("rc = %d nums -> %d  %x  %X\n",
           rc, num, num, num);
    printf("%c\n", num);
    for (int i = 1; i <= 3; i++)
        printf("Track %02d\n", i);
    printf("Pi: %.2f\n", 3.14159);
    printf("100%% complete\n");
}
