
#ifndef TERMCALC_H_
    #define TERMCALC_H_
    #define ERROR_VALUE -1
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <limits.h>
    #include "termcolors.h"

char *get_operator();
int get_first_number();
int get_second_number();
int add(int n1, int n2);

#endif
