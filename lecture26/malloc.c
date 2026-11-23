#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct my_struct {
    char my_letter;
    int my_number;
    char my_name[10];
};

const char message[] = "adding jane X";

int main(int argc, char **argv) {
    printf("%ld\n", sizeof(struct my_struct));
    struct my_struct *list = malloc(10*15);
    char *final_mess = strdup("Added all the jane does to the list");
    for (int i = 0; i < 10; i++) {
        list[i].my_letter = 'A' + i;
        list[i].my_number = i;
        sprintf(list[i].my_name, "%s%d", argv[1], i);
        char *new_mess = strdup(message);
        new_mess[strlen(new_mess)-1] = '0' + i;
        printf("added %s\n", new_mess);
        free(new_mess);
    }
    for (int i = 0; i < 10; i++) {
        printf("%c %d %s\n", list[i].my_letter, list[i].my_number, list[i].my_name);
    }
    printf("%s\n", final_mess);
}
