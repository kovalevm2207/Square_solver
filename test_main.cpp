#include "test_main.h"

void base_test(void)
{
    printf( CHANGE_ON PURPLE TEXT_COLOR "---------------------------------------------------------------------------- МЯУ" RESET "\n"
                                        "Выполение встроенных тестов:"
                                        "\n\n" );

    int failed = run_base_test_solve();

    if (failed == 0) {

        printf( CHANGE_ON LIGHT_GREEN TEXT_COLOR "Встроенные тесты прошли успешно :)" RESET

                                                "\n\n\n" );

    } else {

        printf( CHANGE_ON RED TEXT_COLOR "Не пройдено %d тестов" RESET "\n\n\n", failed );

    }

    printf( CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET "\n");

}
