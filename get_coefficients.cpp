#include "get_coefficients.h"
#include "color_print.h"
#include "help_func.h"

int get_coefficients (double* ptr_a, double* ptr_b, double* ptr_c)    // ���������� ����� ������������
{
    assert(ptr_a != 0);
    assert(ptr_b != 0);
    assert(ptr_c != 0);

    printf("��������� ���� ��������� � ���� " CHANGE_ON UNDERLINED WHITH ORANGE TEXT_COLOR "a*x^2+b*x+c=0" RESET "\n"
           "\n"
           "������� ������������ � ������� " CHANGE_ON ORANGE TEXT_COLOR "a, b, c" RESET " ����� ������:\n\n" CHANGE_ON CYAN TEXT_COLOR);


    while ( scanf("%lg %lg %lg", ptr_a, ptr_b, ptr_c) != NUMBER_OF_COEFFICIENTS || run_to_end() != 0 ) {

        printf(RESET "\n�� " CHANGE_ON BLINKING WHITH RED TEXT_COLOR "�������" RESET " ����� ������������."
               "\n\n"
               "��������� �������? (������� 1 - '��' ��� 2 - '���')\n\n" CHANGE_ON CYAN TEXT_COLOR);

        clear_input_buffer();

        if (analise_anser() == 1) {  //'no'

            return 1;

        } else {

            printf(RESET "������� ������������ " CHANGE_ON UNDERLINED TEXT_COLOR "��� ���" RESET "\n\n" CHANGE_ON CYAN TEXT_COLOR);

        }

    }

    return 0;

}

