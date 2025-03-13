#include <stdio.h>

int get_first_number()
{
    int n1;

    printf("Enter your first number : ");
    if (scanf("%d", &n1) != 1) {
        printf("This input is incorrect or is not a number.\n");
        return 84;
    }
    return n1;
}