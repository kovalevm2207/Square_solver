#include "get_coefficients.h"
#include "color_print.h"
#include "help_func.h"

int get_coefficients (double* ptr_a, double* ptr_b, double* ptr_c)    // возвращает ответ пользователя
{
    assert(ptr_a != 0);
    assert(ptr_b != 0);
    assert(ptr_c != 0);

    printf("Приведите свое уравнение к виду " CHANGE_ON UNDERLINED WHITH ORANGE TEXT_COLOR "a*x^2+b*x+c=0" RESET "\n"
           "\n"
           "Введите коеффициенты в порядке " CHANGE_ON ORANGE TEXT_COLOR "a, b, c" RESET " через пробел:\n\n" CHANGE_ON CYAN TEXT_COLOR);


    while ( scanf("%lg %lg %lg", ptr_a, ptr_b, ptr_c) != NUMBER_OF_COEFFICIENTS || run_to_end() != 0 ) {

        printf(RESET "\nВы " CHANGE_ON BLINKING WHITH RED TEXT_COLOR "неверно" RESET " ввели коеффициенты."
               "\n\n"
               "Повторить попытку? (Введите 1 - 'ДА' или 2 - 'НЕТ')\n\n" CHANGE_ON CYAN TEXT_COLOR);

        clear_input_buffer();

        if (analise_anser() == 1) {  //'no'

            return 1;

        } else {

            printf(RESET "Введите коеффициенты " CHANGE_ON UNDERLINED TEXT_COLOR "еще раз" RESET "\n\n" CHANGE_ON CYAN TEXT_COLOR);

        }

    }

    return 0;

}

