#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("you have %d of argc\n", argc);
    printf("your argv's: \n\n");

    for (int i = 0; i < argc; i++) {
        printf("c: %d -> %s\n", i, argv[i]);
    }

    printf("\n");

    if (argc == 1) {
        printf("you need at least an argument to start with \n");
    } else {
        printf("that is correct \n");
    }

    return 0;
}
