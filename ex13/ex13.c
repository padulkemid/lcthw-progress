#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv
    // why am I skipping argv[0]?

    // because argv[0] is the app it self
    // (in this case the `./ex13.c` is the
    // app so this is the argv[0])
    for (int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    };

    // lets make our own array of strings
    char *states[] = {"California", "Washington", "Oregon", "Texas,"};

    int num_states = 4;

    for (int i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    printf("=================\n");

    // double loop using comma
    for (int i = 0, j = 10; j --> 0; i++, j--) {
        printf("state %d %d: %s\n", i, j, states[i]);
    }

    return 0;
}
