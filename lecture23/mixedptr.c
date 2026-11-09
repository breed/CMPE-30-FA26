#include <stdio.h>

int main() {
    int i = 7234914;
    printf("i is %d %x\n", i, i);
    printf("i is stored at %p\n", &i);
    char *ptr = &i;
    for (int i = 0; i < 4; i++) {
        printf("%p has %02x\n", ptr, *ptr & 0xff);
        ptr++;
    }
    printf("\n");
}
