#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char name[4] = {'a', 'a', 'a', 'a'};

    memcpy(name, numbers, 4);

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
           numbers[3]);

    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 'a';

    // setup the name
    name[0] = 'P';
    name[1] = 'A';
    name[2] = 'D';
    name[3] = 'A';

    // then print them out initialized
    printf("numbers: %d %d %d %c\n", numbers[0], numbers[1], numbers[2],
           numbers[3]);

    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    // print the name like a string
    printf("name: %s\n", name);

    // another way to use name
    char *another = "Padul";

    printf("another: %s\n", another);

    printf("another each: %c %c %c\n", another[0], another[1], another[2]);

    return 0;
}
