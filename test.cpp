#include "test.h"

int test(const char* const argv[], int i)
{

    my_assert(argv != 0);

    FILE* file = fopen(argv[i + 1], "r");

    if (file == NULL) {

        base_test();
        return 0;

    } else {

        base_test();
        added_test(file);

        my_assert(file != 0);

        if (fclose(file) != 0) {

        printf(CHANGE_ON RED TEXT_COLOR "Ошибка" RESET " при закрытии файла\n\n");

        }

        return 1;


    }

}
