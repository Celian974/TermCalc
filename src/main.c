#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "termcalc.h"

int main(void)
{
    char *operator = NULL;
    int n1;
    int n2;

    printf("Welcome to TermCalc !\n");
    while (1) {
        operator = get_operator(operator);
        if (operator == NULL) {
            continue;
        }
        n1 = get_first_number();
        n2 = get_second_number();
        if (strcmp(operator, "+") == 0) {
            printf ("%d + %d = %d\n", n1, n2, add(n1, n2));
        }
        free(operator);
    }
    return 0;
}
