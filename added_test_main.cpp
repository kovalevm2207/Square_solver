#include "added_test_main.h"

void added_test(FILE* file)
{
    my_assert(file != 0);

    printf( CHANGE_ON PURPLE TEXT_COLOR "---------------------------------------------------------------------------- МЯУ" RESET "\n"
                                        "Выполение внешних тестов:"
                                        "\n\n" );

    int failed = run_added_test_solve(file);

    if (failed == 0) {

        printf( CHANGE_ON LIGHT_GREEN TEXT_COLOR "Внешние тесты прошли успешно :)" RESET

                                                "\n\n\n" );

    } else {

        printf( CHANGE_ON RED TEXT_COLOR "Не пройдено %d тестов" RESET "\n\n\n", failed );

    }

    printf( CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET "\n");

}
