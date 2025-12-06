#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 15, 20};
    char name[] = "Padul";
    char *name_pointer = "Padul";
    char full_name[] = {'P', 'A', 'D', 'U', 'L'};

    areas[0] = 100;
    areas[10] = 200;
    // WARNING: On some systems you may have to change the
    // %ld in this code to a %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of an areas[] (int[]) is %ld\n", sizeof(areas));
    printf("The size of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the second one is %d\n", areas[0], areas[1]);

    // breaking
    for (int i = 0; i < 10; i++) {
        printf("%d - %d\n", areas[i], i);
    };

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of a char[]: %ld\n", sizeof(name));
    printf("The numbers of char: %ld\n", sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
    printf("*name_pointer=\"%s\"\n", name);

    return 0;
}
