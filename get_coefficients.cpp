#include "get_coefficients.h"

const int NUMBER_OF_COEFFICIENTS = 3;
const int COD_POINT_ENTER = 10;

void clear_input_buffer(void);
int run_to_end(void);

void get_coefficients (double* ptr_a, double* ptr_b, double* ptr_c)
{
    assert(ptr_a != 0);
    assert(ptr_b != 0);
    assert(ptr_c != 0);

    printf("�� ������� �������� ��� ������� ���������� ���������\n"
           "��������� ���� ��������� � ���� a*x^2+b*x+c=0\n"
           "\n"
           "������� ������������ � ������� a, b, c ����� ������:\n");


    while ( scanf("%lg %lg %lg", ptr_a, ptr_b, ptr_c) != NUMBER_OF_COEFFICIENTS || run_to_end() != 0 ) {

        printf("�� ������� ����� ������������. ������� ������������ ��� ���\n");
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
