#include "termcalc.h"

int add(int n1, int n2)
{
    long long result = (long long)n1 + (long long)n2;

    if (result > INT_MAX || result < INT_MIN) {
        printf("Invalid number entered.\n");
        return ERROR_VALUE;
    }
    return (int)result;
}
