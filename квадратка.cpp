#include <stdio.h>
#include <TXLib.h>
#include <math.h>
#include <assert.h>

const double PRECISION = 1e-6;
const int MAXSIZE = 1000;
const int NUMBER_OF_COEFFICIENTS = 3;

int get_coefficients (double *a, double *b, double *c);

int square_solver (double a, double b, double c, double *ptr_x1, double *ptr_x2);

int print_solution (double x1, double x2, int number_of_roots);

int compare (double a, double b);

int a_null_square_solver (double b, double c, double *ptr_x1);

int a_not_null_square_solver (double a, double b, double c, double *ptr_x1, double *ptr_x2);

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
    // todo инициализируй переменные при объявлении
    double a = 0;
    double b = 0;
    double c = 0;
    double x1 = 0;
    double x2 = 0;

    printf("Вы открыли рограмму для решения квадратных уравнений\n"
           "Приведите свое уравнение к виду a*x^2+b*x+c=0\n"
           "\n"
           "Введите коеффициенты в порядке a, b, c через пробел:\n");

    int check_get = get_coefficients (&a, &b, &c);
    if (check_get == 0) {

        int number_of_roots = square_solver (a, b, c, &x1, &x2);

        int check_print = print_solution (x1, x2, number_of_roots);
        if (check_print == 0) {

            return 0;

        } else if (check_print == 1) {

            return 1;

        }

    } else {

        printf("Вы неверно ввели коеффициенты уравнения");
        return 1;

    }

}


int get_coefficients (double *ptr_a, double *ptr_b, double *ptr_c)
{
    assert(ptr_a != 0);
    assert(ptr_b != 0);
    assert(ptr_c != 0);

    char check[MAXSIZE] = {0};

    if (scanf("%lg %lg %lg %s", ptr_a, ptr_b, ptr_c, check) == NUMBER_OF_COEFFICIENTS) {

        return 0;

    } else {

        return 1;

    }

}



int  square_solver (double a, double b, double c, double *ptr_x1, double *ptr_x2)
{
    assert(ptr_x1 != 0);
    assert(ptr_x2 != 0);

    if (compare(a, 0) == 0) {

        return a_null_square_solver (b, c, ptr_x1);

    } else {        // a != 0

        return a_not_null_square_solver (a, b, c, ptr_x1, ptr_x2);

    }

}




int print_solution (double x1, double x2, int number_of_roots)
{

    switch (number_of_roots) {

        case 0 :

            printf ("Ваше уравнение не имеет решений в действительных числах");
            return 0;

        case 1 :

            printf ("Ваше уравнение имеет 1 решение:\n"
                    " x = %lg\n", x1);
            return 0;

        case 2 :

            printf ("Ваше уравнение имеет 2 решения:\n"
                    " x1 = %lg\n"
                    " x2 = %lg\n", x1, x2);
            return 0;

        case 3 :

            printf ("Ваше уравнение имеет бесконечное количество решений");
            return 0;

        default :

            printf ("К сожалению, во время выполнения программы программы произошла ошибка");
            return 1;

    }

}



int compare (double a, double b)
{
    if (a > b + PRECISION) {

        return 1;

    } else if ( b > a + PRECISION) {

        return -1;

    } else {

        return 0;

    }

}



int a_null_square_solver (double b, double c, double *ptr_x1)
{
    assert(ptr_x1 != 0);

    if (compare(b, 0) == 0) {

        if (compare(c, 0) == 0) {

            return 3;       // 3 - бесконечное кол-во решений

        } else {   //  if  a == 0, b == 0, c != 0

            return 0;       // 0 - нет решений

        }

    } else {    // if a == 0, b != 0

        *ptr_x1 = - c / b;
        return 1;

    }

}



int a_not_null_square_solver (double a, double b, double c, double *ptr_x1, double *ptr_x2)
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
