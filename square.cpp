#include <stdio.h>
//#include <TXLib.h>


#include "get_coefficients.h"
#include "solve_equation.h"
#include "print_solution.h"
#include "color_print.h"

//---------------------------------------------------
//! Программа для решения уравнения вида a*x^2 + b*x + c = 0
//!
//! @param [in]  a  a-коеффициент
//! @param [in]  b  b-коеффициент
//! @param [in]  c  c-коеффициент
//! @param [out] x1 первый корень уравнения
//! @param [out] x2 второй корень уравнения
//!
//! @return количество корней уравнения
//!
//! @note
//!
//---------------------------------------------------
//#include <string.h>
//strcmp()   // ok = 0
//const int END = 1;

int main()
{
    printf( CHANGE_ON PURPLE TEXT_COLOR "---------------------------------------------------------------------------- МЯУ" RESET
                                               "\n\n\n" );
    printf(CHANGE_ON BOLD WHITH LIGHT_PURPLE TEXT_COLOR " Вы открыли программу для решения квадратных уравнений"
           CHANGE_ON BLINKING WHITH LIGHT_PURPLE TEXT_COLOR " !!!" RESET "\n"
           "\n\n");

    double a = 0, b = 0, c = 0;
    double x1 = 0, x2 = 0;

    int answer = get_coefficients (&a ,&b ,&c);


    if (answer == 1) {

        printf(RESET "Пользователь завершил выполнение программы.\n");
        return 0;

    } else {

        int number_of_roots = solve_equation (a, b, c, &x1, &x2);

        if (number_of_roots == 4) {

            return 1;

        } else {

            print_solution (x1, x2, number_of_roots);

        }

    }

    return 0;

}

