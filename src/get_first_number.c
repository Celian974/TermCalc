#include "termcalc.h"

int get_first_number()
{
    int n1;

    purple();
    printf("Enter your first number : ");
    reset();
    if (scanf("%d", &n1) != 1) {
        red();
        printf("This input is incorrect or is not a number.\n");
        reset();
        while (getchar() != '\n');
        return ERROR_VALUE;
    }
    return n1;
}
