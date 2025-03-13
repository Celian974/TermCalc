
#ifndef TERMCALC_H_
    #define TERMCALC_H_
    #define ERROR_VALUE -1
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <limits.h>
    #include "termcolors.h"
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
int apply_operation(char *operator, int n1, int n2, op_result *result);

#endif
