#include <stdio.h>
#include <string.h>

void concat(const char *s1, const char *s2, int *plen1, int *plen2) {
    *plen1 = strlen(s1);
    *plen2 = strlen(s2);
    char dst[10] = "";

    printf("dst at %p len1 at %p len2 at %p\n", dst, plen1, plen2);
    int total = *plen1 + *plen2;
    strcat(dst, s1);
    strcat(dst, s2);
    printf("%s has len %d\n", s1, *plen1);
    printf("%s has len %d\n", s2, *plen2);
    printf("dst %s has len %ld total %d\n", dst, strlen(dst), total);
}
int main(int argc, char **argv) {
    int len1;
    int len2;
    concat(argv[1], argv[2], &len1, &len2);
}
