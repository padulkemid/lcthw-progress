#include <stdio.h>

void crash()
{
    char *status = NULL;

    for (int i = 0; i < 10000000; i++) {
        printf("%c", status[i]);
    }
}

int main(int argc, char *argv[])
{
    printf("crash stuff\n");

    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();
    crash();

    return 0;
}
