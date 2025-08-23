#include "print_solution.h"

int print_solution (double x1, double x2, int number_of_roots)
{

    switch (number_of_roots) {

        case 0 :

            printf ("���� ��������� �� ����� ������� � �������������� ������");
            return 0;

        case 1 :

            printf ("���� ��������� ����� 1 �������:\n"
                    " x = %lg\n", x1);
            return 0;

        case 2 :

            printf ("���� ��������� ����� 2 �������:\n"
                    " x1 = %lg\n"
                    " x2 = %lg\n", x1, x2);
            return 0;

        case 3 :

            printf ("���� ��������� ����� ����������� ���������� �������");
            return 0;

        default :

            printf ("� ���������, �� ����� ���������� ��������� ��������� ��������� ������");
            return 1;

    }

}
