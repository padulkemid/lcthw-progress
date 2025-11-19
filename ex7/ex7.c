#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 42342.213;
    char initial = 'P';
    char first_name[] = "Padul";
    char last_name[] = "Kemid";

    printf("You are %d kilometers away. \n", distance);
    printf("You have %.2f levels of power. \n", power);
    printf("You have %.1f awesome super powers. \n", super_power);
    printf("I have an initial %c. \n", initial);
    printf("I have a first name %s. \n", first_name);
    printf("I have a last name %s/ \n", last_name);
    printf("My full name is %s %c. %s \n", first_name, initial, last_name);
    printf("How many arg character is %d and arg variables %p. \n", argc, argv);

    int bugs = 100;
    double bug_rate = 0.2;

    printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);

    unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("This is the universe of defects; %ld. \n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("This is the expected bugs %.2f \n", expected_bugs);

    double parts_of_universe = expected_bugs / universe_of_defects;
    printf("That is the only portion of %e in the universe: %E. \n", parts_of_universe, parts_of_universe);

    // nul byte demo
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care about %d%%.\n", care_percentage);


    return 0;
}
