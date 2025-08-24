#include "solve_equation.h"
#include "help_func.h"

int solve_linearer (double b, double c, double *ptr_x1);
int solve_square (double a, double b, double c, double *ptr_x1, double *ptr_x2);

int  solve_equation (double a, double b, double c, double *ptr_x1, double *ptr_x2)
{
    assert(ptr_x1 != 0);
    assert(ptr_x2 != 0);

    if (compare(a, 0) == 0) {

        return solve_linearer (b, c, ptr_x1);

    } else {        // a != 0

        return solve_square (a, b, c, ptr_x1, ptr_x2);

    }

}







int solve_linearer (double b, double c, double *ptr_x1)
{
    assert(ptr_x1 != 0);

    if (compare(b, 0) == 0) {

        if (compare(c, 0) == 0) {

            return 3;       // 3 - бесконечное кол-во решений

        } else {   //  if  a == 0, b == 0, c != 0

            return 0;       // 0 - нет решений

        }

    } else if(compare(c, 0) == 0) {    // if a == 0, b != 0

        *ptr_x1 = 0;
        return 1;

    } else {

        *ptr_x1 = - c / b;
        return 1;

    }

}


int solve_square (double a, double b, double c, double *ptr_x1, double *ptr_x2)
{
    assert(ptr_x1 != 0);
    assert(ptr_x2 != 0);

    double discriminant = b * b - 4 * a * c;

    switch (compare(discriminant, 0)) {

        case -1 :

            return 0;    // нет решений

        case 0 :

            *ptr_x1 = - b / ( 2 * a);
            return 1;    // 1 решение

        case 1 :

            *ptr_x1 = ( - b + sqrt (discriminant) ) / ( 2 * a );
            *ptr_x2 = ( - b - sqrt (discriminant) ) / ( 2 * a );
            return 2;    // 2 решения

        default :

            return -1;   // ошибка

    }

}



