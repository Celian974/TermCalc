#include "termcalc.h"

int main(void)
{
    char *operator = NULL;
    int n1;
    int n2;
    int addition_result;

    white();
    printf("Welcome to TermCalc !\n");
    reset();
    while (1) {
        operator = get_operator();
        if (operator == NULL) {
            continue;
        }
        n1 = get_first_number();
        if (n1 == ERROR_VALUE) continue;
        n2 = get_second_number();
        if (n2 == ERROR_VALUE) continue;
        if (strcmp(operator, "+") == 0) {
            addition_result = add(n1, n2);
            if (addition_result != ERROR_VALUE) {
                white();
                printf ("%d + %d = %d\n", n1, n2, addition_result);
                reset();
            }
        }
        free(operator);
    }
    return 0;
}
