#include "test_solve.h"

int run_base_test_solve(void)
{

    int failed = 0;

    test_param basic_data[] = {
                                {
                                    {.a = 0, .b = 0, .c = 0},
                                    {.x1ref = 0, .x2ref = 0, .roots_ref = 3}
                                },

                                {
                                    {.a = 0, .b = 0, .c = 1},
                                    {.x1ref = 0, .x2ref = 0, .roots_ref = 0}
                                },

                                {
                                    {.a = 0, .b = 1, .c =  0},
                                    {.x1ref = 0, .x2ref = 0, .roots_ref = 1}
                                },

                                {
                                    {.a = 0, .b = 1, .c = -2},
                                    {.x1ref = 2, .x2ref = 0, .roots_ref = 1}
                                },

                                {
                                    {.a = 0, .b = 4, .c = -1},
                                    {.x1ref = 0.25, .x2ref = 0, .roots_ref = 1}
                                },

                                {
                                    {.a = 1, .b = -5, .c = 6},
                                    {.x1ref = 3, .x2ref = 2, .roots_ref = 2}
                                },

                                {
                                    {.a = 1, .b = 2, .c = 2},
                                    {.x1ref = 0, .x2ref = 0, .roots_ref = 0}
                                },

                                {
                                    {.a = 1, .b = 2, .c = 1},
                                    {.x1ref = -1, .x2ref = 0, .roots_ref = 1}
                                },

                                {
                                    {.a = 4, .b = 4, .c = 1},
                                    {.x1ref = -0.5, .x2ref = 0, .roots_ref = 1}
                                }
                              };

    for (size_t i = 0; i < sizeof(basic_data) / sizeof(basic_data[0] ); ++i) {

        if (one_test_solve(&basic_data[i]) == 0) {

            printf(CHANGE_ON RED TEXT_COLOR "ERORR" RESET
                   " in example number" CHANGE_ON RED TEXT_COLOR " %lu" RESET "\n\n", i+1);

            ++failed;

        } else {

            printf(CHANGE_ON GREEN TEXT_COLOR "SUCCESS" RESET
                   " in example number" CHANGE_ON GREEN TEXT_COLOR " %lu" RESET "\n\n", i+1);

        }

    }

    return failed;

}



int one_test_solve(test_param *data)
{

    my_assert (data != 0);

    double x1 = 0, x2 = 0;

    int number_of_roots = solve_equation(data->kef.a, data->kef.b, data->kef.c, &x1, &x2);

    if (!(compare(x1, data->ans.x1ref) == 0 &&
          compare(x2, data->ans.x2ref) == 0 &&
          number_of_roots == data->ans.roots_ref)) {

        printf(CHANGE_ON RED TEXT_COLOR "FAILED" RESET ": solve_equation(%lg, %lg, %lg) ->\n\n"
               "you have :  number_of_roots = %d, x1 = %lg, x2 = %lg\n\n"
               "should be:  number_of_roots = %d, x1 = %lg, x2 = %lg\n\n",
               data->kef.a, data->kef.b, data->kef.c,
               number_of_roots, x1, x2,
               data->ans.roots_ref, data->ans.x1ref, data->ans.x2ref);

        return 0;

    }

    return 1;

}
