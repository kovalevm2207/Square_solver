#include <stdio.h>
#include <TXLib.h>
#include <math.h>
#include <assert.h>


#include "get_coefficients.h"
#include "solve_equation.h"
#include "print_solution.h"

//void get_coefficients (double* ptr_a, double* ptr_b, double* ptr_c);
//int  solve_equation (double a, double b, double c, double *ptr_x1, double *ptr_x2);
//int print_solution (double x1, double x2, int number_of_roots);

//---------------------------------------------------
//! Решения квадратного уравнения a*x^2 + b*x + c = 0
//!
//! @param [in]  a  a-коеффициент
//! @param [in]  b  b-коеффициент
//! @param [in]  c  c-коеффициент
//! @param [out] x1 переменная для первого корня
//! @param [out] x2 переменная для второго корня
//!
//! @return завершилась или нет
//!
//! @note
//!
//---------------------------------------------------

int main()
{

    double a = 0, b = 0, c = 0;
    double x1 = 0, x2 = 0;

    get_coefficients (&a ,&b ,&c);

    int number_of_roots = solve_equation (a, b, c, &x1, &x2);

    int check_print = print_solution (x1, x2, number_of_roots);
    if (check_print == 0) {

        return 0;

    } else {

        return 1;

    }

}
