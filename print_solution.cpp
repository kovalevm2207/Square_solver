#include "print_solution.h"

int print_solution (double x1, double x2, int number_of_roots)
{

    switch (number_of_roots) {

        case 0 :

            printf ("Ваше уравнение не имеет решений в действительных числах");
            return 0;

        case 1 :

            printf ("Ваше уравнение имеет 1 решение:\n"
                    " x = %lg\n", x1);
            return 0;

        case 2 :

            printf ("Ваше уравнение имеет 2 решения:\n"
                    " x1 = %lg\n"
                    " x2 = %lg\n", x1, x2);
            return 0;

        case 3 :

            printf ("Ваше уравнение имеет бесконечное количество решений");
            return 0;

        default :

            printf ("К сожалению, во время выполнения программы программы произошла ошибка");
            return 1;

    }

}
