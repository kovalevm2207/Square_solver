#ifndef PRINT_SOLUTION
#define PRINT_SOLUTION


#include <stdio.h>
//#include <TXLib.h>
#include "color_print.h"

enum anser {

    ANSER_ZERO,
    ANSER_ONE,
    ANSER_TWO,
    ANSER_INF,
    ANSER_DEFAULT

};

void print_solution (double x1, double x2, int number_of_roots);

#endif // PRINT_SOLUTION
