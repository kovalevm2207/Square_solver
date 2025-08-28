#ifndef GET_COEFFICIENTS_H
#define GET_COEFFICIENTS_H

#include "my_assert.h"
#include <stdio.h>
//#include <TXLib.h>
#include "color_print.h"
#include "help_func.h"

const int NUMBER_OF_COEFFICIENTS = 3, REJECTION = 1;

int get_coefficients (double *ptr_a, double *ptr_b, double *ptr_c);

#endif // GET_COEFFICIENTS_H
