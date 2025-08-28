#include "print_solution.h"

void print_solution (double x1, double x2, int number_of_roots)
{

    switch (number_of_roots) {

        case ANSER_ZERO :

            printf (RESET "\nВаше уравнеие " CHANGE_ON ORANGE TEXT_COLOR " не имеет решений" RESET " в действительных числах\n");
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "---------------------------------------------------------------------------- COMMIT GITHUB" RESET "\n");
            break;

        case ANSER_ONE :

            printf (RESET "\nВаше уравнение имеет" CHANGE_ON ORANGE TEXT_COLOR " 1 " RESET "решение:\n\n"
                    CHANGE_ON ORANGE TEXT_COLOR " x = %lg" RESET "\n", x1);
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "---------------------------------------------------------------------------- COMMIT GITHUB" RESET "\n");
            break;

        case ANSER_TWO :

            printf (RESET "\nВаше уравнение имеет " CHANGE_ON ORANGE TEXT_COLOR "2" RESET " решения:\n\n"
                    CHANGE_ON ORANGE TEXT_COLOR " x1 = %lg" RESET "\n\n"
                    CHANGE_ON ORANGE TEXT_COLOR " x2 = %lg" RESET "\n", x1, x2);
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "---------------------------------------------------------------------------- COMMIT GITHUB" RESET "\n");
            break;

        case ANSER_INF :

            printf (RESET "\nВаше уравнение имеет " CHANGE_ON ORANGE TEXT_COLOR "бесконечное количество решений" RESET "\n");
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "---------------------------------------------------------------------------- COMMIT GITHUB" RESET "\n");
            break;

        default :

            printf (RESET "\nК сожалению , в ходе выполения программы произошла ошибка\n");
            printf("\n\n" CHANGE_ON PURPLE TEXT_COLOR "---------------------------------------------------------------------------- COMMIT GITHUB" RESET "\n");
            break;

    }

}
