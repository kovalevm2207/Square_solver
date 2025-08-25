#include <stdio.h>
#include <TXLib.h>

#include "test_solve.h"
#include "color_print.h"

int main()
{
    printf( CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET
                                               "\n\n\n" );

    int failed = run_test_solve();
    if (failed == 0) {

        printf( CHANGE_ON LIGHT_GREEN TEXT_COLOR "The program test has been completed successfully :)" RESET
                                                            "\n\n\n" );

    } else {

        printf( CHANGE_ON RED TEXT_COLOR "You have failed %d tests" RESET "\n\n\n", failed );

    }

    printf( CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET "\n");

    return 0;

}
