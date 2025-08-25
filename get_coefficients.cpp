#include "get_coefficients.h"
#include "color_print.h"

void clear_input_buffer(void);
int run_to_end(void);


void get_coefficients (double* ptr_a, double* ptr_b, double* ptr_c)
{
    assert(ptr_a != 0);
    assert(ptr_b != 0);
    assert(ptr_c != 0);
    printf( CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET
                                               "\n\n\n" );
    printf(CHANGE_ON BOLD WHITH LIGHT_PURPLE TEXT_COLOR "Вы открыли рограмму для решения квадратных уравнений" RESET CHANGE_ON BLINKING WHITH LIGHT_PURPLE TEXT_COLOR " !!!" RESET "\n"
           "\n"
           "\n"
           "Приведите свое уравнение к виду " CHANGE_ON UNDERLINED WHITH ORANGE TEXT_COLOR "a*x^2+b*x+c=0" RESET "\n"
           "\n"
           "Введите коеффициенты в порядке " CHANGE_ON ORANGE TEXT_COLOR "a, b, c" RESET " через пробел:\n\n" CHANGE_ON CYAN TEXT_COLOR);


    while ( scanf("%lg %lg %lg", ptr_a, ptr_b, ptr_c) != NUMBER_OF_COEFFICIENTS || run_to_end() != 0 ) {

        printf(RESET "\nВы " CHANGE_ON BLINKING WHITH RED TEXT_COLOR "неверно" RESET " ввели коеффициенты. Введите коеффициенты " CHANGE_ON UNDERLINED TEXT_COLOR "еще раз" RESET
               "\n\n" CHANGE_ON CYAN TEXT_COLOR);
        clear_input_buffer();

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


