#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *get_operator()
{
    char *operator = malloc(2 * sizeof(char));

    printf("Enter an operator : ");
    scanf("%1s", operator);
    if (strcmp(operator, "+") != 0 && strcmp(operator, "-") != 0
    && strcmp(operator, "*") != 0 && strcmp(operator, "/") != 0) {
        printf("This operator is incorrect.\n");
        return NULL;
    }
    return operator;
}
