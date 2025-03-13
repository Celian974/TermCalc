#include <stdio.h>

int get_second_number()
{
    int n2;

    printf("Enter your second number : ");
    if (scanf("%d", &n2) != 1) {
        printf("This input is incorrect or is not a number.\n");
        return 84;
    }
    return n2;
}