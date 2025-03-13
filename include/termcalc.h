
#ifndef TERMCALC_H_
    #define TERMCALC_H_
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <limits.h>
    #include "termcolors.h"
    #define ERROR_VALUE INT_MAX

typedef struct {
    int add_result;
    int sub_result;
    int mul_result;
    int div_result;
} op_result;

char *get_operator();
int get_first_number();
int get_second_number();
int add(int n1, int n2);
int substract(int n1, int n2);
int multiply(int n1, int n2);
int apply_operation(char *operator, int n1, int n2, op_result *result);

#endif
