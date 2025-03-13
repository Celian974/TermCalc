#include "termcalc.h"

int main(void)
{
    char *operator = NULL;
    int n1;
    int n2;
    op_result result;

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
        apply_operation(operator, n1, n2, &result);
        free(operator);
    }
    return 0;
}
