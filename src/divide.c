#include "termcalc.h"

double divide(int n1, int n2)
{
    if (n2 == 0) {
        red();
        printf("Division by zero is not allowed\n");
        reset();
        return ERROR_VALUE;
    }
    if (n1 == INT_MIN && n2 == -1) {
        red();
        printf("Overflow or underflow occured.\n");
        reset();
    }
    if (n1 % n2 == 0) {
        return (double)(n1 / n2);
    } else {
        return (double)n1 / n2;
    }
}
