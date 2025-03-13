#include "termcalc.h"

int get_second_number()
{
    int n2;

    purple();
    printf("Enter your second number : ");
    reset();
    if (scanf("%d", &n2) != 1) {
        red();
        printf("This input is incorrect or is not a number.\n");
        reset();
        while(getchar() != '\n');
        return ERROR_VALUE;
    }
    return n2;
}