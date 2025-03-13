#include "termcalc.h"

int substract(int n1, int n2)
{
    long long result = (long long)n1 - (long long)n2;

    if (result > INT_MAX || result < INT_MIN) {
        red();
        printf("Overflow or underflow occured.\n");
        reset();
        return ERROR_VALUE;
    }
    return (int)result;
}
