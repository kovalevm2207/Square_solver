#include "print_solution.h"
#include "color_print.h"

int print_solution (double x1, double x2, int number_of_roots)
{

    switch (number_of_roots) {

        case 0 :

            printf (RESET "\n���� ���������" CHANGE_ON ORANGE TEXT_COLOR " �� ����� �������" RESET " � �������������� ������\n");
            return 0;

        case 1 :

            printf (RESET "\n���� ��������� �����" CHANGE_ON ORANGE TEXT_COLOR " 1 " RESET "�������:\n"
                    CHANGE_ON ORANGE TEXT_COLOR " x = %lg" RESET "\n", x1);
            return 0;

        case 2 :

            printf (RESET "\n���� ��������� ����� " CHANGE_ON ORANGE TEXT_COLOR "2" RESET " �������:\n"
                    " x1 = %lg\n"
                    " x2 = %lg\n", x1, x2);
            return 0;

        case 3 :

            printf (RESET "\n���� ��������� ����� " CHANGE_ON ORANGE TEXT_COLOR "����������� ���������� �������" RESET "\n");
            return 0;

        default :

            printf (RESET "\n� ���������, �� ����� ���������� ��������� ��������� ��������� ������\n");
            return 1;

    }

}
