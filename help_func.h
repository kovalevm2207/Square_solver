#ifndef HELP_FUNC_H
#define HELP_FUNC_H

//#include <TXLib.h>
#include <stdio.h>
#include "color_print.h"

const int COD_POINT_ENTER = 10;
const double PRECISION = 1e-12;
const int YES = 1, NO = 2;

int compare (double a, double b) ;

int analise_anser (void) ;

void clear_input_buffer(void);

int run_to_end(void);

#endif // HELP_FUNC_H
