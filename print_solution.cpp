#include "print_solution.h"
#include "color_print.h"

int print_solution (double x1, double x2, int number_of_roots)
{

    switch (number_of_roots) {

        case 0 :

            printf (RESET "\nВаше уравнение" CHANGE_ON ORANGE TEXT_COLOR " не имеет решений" RESET " в действительных числах\n");
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET "\n");
            return 0;

        case 1 :

            printf (RESET "\nВаше уравнение имеет" CHANGE_ON ORANGE TEXT_COLOR " 1 " RESET "решение:\n\n"
                    CHANGE_ON ORANGE TEXT_COLOR " x = %lg" RESET "\n", x1);
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET "\n");
            return 0;

        case 2 :

            printf (RESET "\nВаше уравнение имеет " CHANGE_ON ORANGE TEXT_COLOR "2" RESET " решения:\n\n"
                    CHANGE_ON ORANGE TEXT_COLOR " x1 = %lg" RESET "\n\n"
                    CHANGE_ON ORANGE TEXT_COLOR " x2 = %lg" RESET "\n", x1, x2);
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET "\n");
            return 0;

        case 3 :

            printf (RESET "\nВаше уравнение имеет " CHANGE_ON ORANGE TEXT_COLOR "бесконечное количество решений" RESET "\n");
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET "\n");
            return 0;

        default :

            printf (RESET "\nК сожалению, во время выполнения программы программы произошла ошибка\n");
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "----------------------------------------------------------------------------" RESET "\n");
            return 1;

    }

}
