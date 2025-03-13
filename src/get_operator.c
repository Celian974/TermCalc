#include "termcalc.h"

char *get_operator()
{
    char *operator = malloc(2 * sizeof(char));

    yellow();
    printf("Enter an operator : ");
    reset();
    scanf("%1s", operator);
    if (strcmp(operator, "+") != 0 && strcmp(operator, "-") != 0
    && strcmp(operator, "*") != 0 && strcmp(operator, "/") != 0) {
        red();
        printf("This operator is incorrect.\n");
        reset();
        free(operator);
        return NULL;
    }
    return operator;
}
