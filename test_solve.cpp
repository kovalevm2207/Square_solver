#include "test_solve.h"
#include "solve_equation.h"
#include "help_func.h"
#include "color_print.h"

int run_test_solve()
{
    //example number    1  2  3   4     5   6  7   8     9

    double      a[] = {0, 0, 0,  0,    0,  1, 1,  1,    4};
    double      b[] = {0, 0, 1,  1,    4, -5, 2,  2,    4};
    double      c[] = {0, 1, 0, -2,   -1,  6, 2,  1,    1};
    double  x1ref[] = {0, 0, 0,  2, 0.25,  3, 0, -1, -0.5};
    double  x2ref[] = {0, 0, 0,  0,    0,  2, 0,  0,    0};
    int roots_ref[] = {3, 0, 1,  1,    1,  2, 0,  1,    1};

    int failed = 0;        //1                          1

    for (unsigned int i = 0; i < sizeof(a) / sizeof( a[0] ); ++i) {

        if (one_test_solve(a[i], b[i], c[i], x1ref[i], x2ref[i], roots_ref[i]) == 0) {

            printf(CHANGE_ON RED TEXT_COLOR "ERORR" RESET " in example number" CHANGE_ON RED TEXT_COLOR " %d" RESET "\n\n", ++i);
            ++failed;

        }

    }

    return failed;

}



int one_test_solve(double a, double b, double c, double x1ref, double x2ref, int roots_ref)
{
    double x1 = 0, x2 = 0;

    int number_of_roots = solve_equation(a, b, c, &x1, &x2);

    if (!(compare(x1, x1ref) == 0 && compare(x2, x2ref) == 0 && number_of_roots == roots_ref)) {

        printf(CHANGE_ON RED TEXT_COLOR "FAILED" RESET ": solve_equation(%lg, %lg, %lg) ->\n\n"
               "you have :  number_of_roots = %d, x1 = %lg, x2 = %lg\n\n"
               "should be:  number_of_roots = %d, x1 = %lg, x2 = %lg\n\n",
               a, b, c, number_of_roots, x1, x2, roots_ref, x1ref, x2ref);

        return 0;

    }

    return 1;

}
