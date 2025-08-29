#include "help_func.h"


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


int analise_anser (void)
{
    int ans = 0;

    scanf("%d", &ans);

    while( !( (ans == YES || ans == NO) && run_to_end() == 0) ) {

        clear_input_buffer();

        printf(RESET "\nВыбран не существующий вариант ответа "
               "\n"
               "Введите ответ " CHANGE_ON UNDERLINED TEXT_COLOR "еще раз" RESET " (1 - 'да' , 2 - 'нет')\n\n" CHANGE_ON CYAN TEXT_COLOR );

        scanf("%d", &ans);

    }

    if (ans == YES) {

        return 0;

    } else {

        return 1;

    }

}


int run_to_end(void)
{
    int sumbol = 0;

    while ( (sumbol = getchar() ) != COD_POINT_ENTER) {

        if (sumbol != ' ') {

            return 1;

        }

    }

    return 0;

}


void clear_input_buffer(void)
{
    int sumbol = 0;

    while ( (sumbol = getchar()) != COD_POINT_ENTER ) {

        ;

    }

}

