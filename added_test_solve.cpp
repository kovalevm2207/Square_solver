#include "added_test_solve.h"

int run_added_test_solve(FILE* file)
{

    int failed = 0;


    for(size_t i = 0; i < 9; i++) {

        test_param add_data = {  {.a = 0, .b = 0, .c = 0}, {.x1ref = 0, .x2ref = 0, .roots_ref = 0}  };

        fscanf(file, "%lf %lf %lf %lf %lf %d", &add_data.kef.a, &add_data.kef.b, &add_data.kef.c, &add_data.ans.x1ref,
                                               &add_data.ans.x2ref, &add_data.ans.roots_ref );

        if (one_test_solve(&add_data) == 0) {

            printf(CHANGE_ON RED TEXT_COLOR "ERORR" RESET
                   " in example number" CHANGE_ON RED TEXT_COLOR " %lu" RESET "\n\n", i+1);

            ++failed;

        } else {

            printf(CHANGE_ON GREEN TEXT_COLOR "SUCCESS" RESET
                   " in example number" CHANGE_ON GREEN TEXT_COLOR " %lu" RESET "\n\n", i+1);

        }

        add_data ={  {.a = 0, .b = 0, .c = 0}, {.x1ref = 0, .x2ref = 0, .roots_ref = 0}  };

    }

    return failed;

}

