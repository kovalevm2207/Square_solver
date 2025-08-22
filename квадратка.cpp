#include <stdio.h>
#include <TXLib.h>
#include <math.h>
#include <assert.h>

const double PRECISION = 1e-6;
const int MAXSIZE = 1000;
const int NUMBER_OF_COEFFICIENTS = 3;

int get_coefficients (double *a, double *b, double *c);

int square_solver (double a, double b, double c, double *ptr_x1, double *ptr_x2);

int print_solution (double x1, double x2, int number_of_roots);

int compare (double a, double b);

int a_null_square_solver (double b, double c, double *ptr_x1);

int a_not_null_square_solver (double a, double b, double c, double *ptr_x1, double *ptr_x2);

//---------------------------------------------------
//! ������� ����������� ��������� a*x^2 + b*x + c = 0
//!
//! @param [in]  a  a-�����������
//! @param [in]  b  b-�����������
//! @param [in]  c  c-�����������
//! @param [out] x1 ���������� ��� ������� �����
//! @param [out] x2 ���������� ��� ������� �����
//!
//! @return ����������� ��� ���
//!
//! @note
//!
//---------------------------------------------------
int main()
{
    // todo ������������� ���������� ��� ����������
    double a = 0;
    double b = 0;
    double c = 0;
    double x1 = 0;
    double x2 = 0;

    printf("�� ������� �������� ��� ������� ���������� ���������\n"
           "��������� ���� ��������� � ���� a*x^2+b*x+c=0\n"
           "\n"
           "������� ������������ � ������� a, b, c ����� ������:\n");

    int check_get = get_coefficients (&a, &b, &c);
    if (check_get == 0) {

        int number_of_roots = square_solver (a, b, c, &x1, &x2);

        int check_print = print_solution (x1, x2, number_of_roots);
        if (check_print == 0) {

            return 0;

        } else if (check_print == 1) {

            return 1;

        }

    } else {

        printf("�� ������� ����� ������������ ���������");
        return 1;

    }

}


int get_coefficients (double *ptr_a, double *ptr_b, double *ptr_c)
{
    assert(ptr_a != 0);
    assert(ptr_b != 0);
    assert(ptr_c != 0);

    char check[MAXSIZE] = {0};

    if (scanf("%lg %lg %lg %s", ptr_a, ptr_b, ptr_c, check) == NUMBER_OF_COEFFICIENTS) {

        return 0;

    } else {

        return 1;

    }

}



int  square_solver (double a, double b, double c, double *ptr_x1, double *ptr_x2)
{
    assert(ptr_x1 != 0);
    assert(ptr_x2 != 0);

    if (compare(a, 0) == 0) {

        return a_null_square_solver (b, c, ptr_x1);

    } else {        // a != 0

        return a_not_null_square_solver (a, b, c, ptr_x1, ptr_x2);

    }

}




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



int a_null_square_solver (double b, double c, double *ptr_x1)
{
    assert(ptr_x1 != 0);

    if (compare(b, 0) == 0) {

        if (compare(c, 0) == 0) {

            return 3;       // 3 - ����������� ���-�� �������

        } else {   //  if  a == 0, b == 0, c != 0

            return 0;       // 0 - ��� �������

        }

    } else {    // if a == 0, b != 0

        *ptr_x1 = - c / b;
        return 1;

    }

}



int a_not_null_square_solver (double a, double b, double c, double *ptr_x1, double *ptr_x2)
{
    assert(ptr_x1 != 0);
    assert(ptr_x2 != 0);

    double discriminant = b * b - 4 * a * c;

    switch (compare(discriminant, 0)) {

        case -1 :

            return 0;    // ��� �������

        case 0 :

            *ptr_x1 = - b / ( 2 * a);
            return 1;    // 1 �������

        case 1 :

            *ptr_x1 = ( - b + sqrt (discriminant) ) / ( 2 * a );
            *ptr_x2 = ( - b - sqrt (discriminant) ) / ( 2 * a );
            return 2;    // 2 �������

        default :

            return -1;   // ������

    }

}
