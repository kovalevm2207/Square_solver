#ifndef SOLVE_EQUATION
#define SOLVE_EQUATION

#include "my_assert.h"
#include <stdio.h>
#include <math.h>
//#include <TXLib.h>
#include "help_func.h"

enum roots {

    ROOTS_ZERO,
    ROOTS_ONE,
    ROOTS_TWO,
    ROOTS_INF,
    ROOTS_DEFAULT

};

int solve_equation (double a, double b, double c, double *ptr_x1, double *ptr_x2);

#endif // SOLVE_EQUATION
