#include <stdio.h>
#include <TXLib.h>
#include <math.h>
#include <assert.h>


#include "get_coefficients.h"
#include "solve_equation.h"
#include "print_solution.h"
#include "help_func.h"
#include "test_solve.h"
#include "color_print.h"





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
    printf( CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET
                                               "\n\n\n" );

    int failed = run_test_solve();
    if (failed == 0) {

        printf( CHANGE_ON LIGHT_GREEN WHITH DARK_GREY_BACK TEXT_COLOR "The program test has been completed successfully :)" RESET
                                                            "\n\n\n" );

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

    } else {

        return 1;

    }

}

