#include "termcalc.h"

int apply_operation(char *operator, int n1, int n2, op_result *result)
{
    if (strcmp(operator, "+") == 0) {
        result->add_result = add(n1, n2);
        if (result->add_result != ERROR_VALUE) {
            white();
            printf ("%d + %d = %d\n", n1, n2, result->add_result);
            reset();
        }
    } else if (strcmp(operator, "-") == 0) {
        result->sub_result = substract(n1, n2);
        if (result->sub_result != ERROR_VALUE) {
            white();
            printf("%d - %d = %d\n", n1, n2, result->sub_result);
            reset();
        }
    }
    return 0;
}