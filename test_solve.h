#include <stdio.h>
#include <TXLib.h>

struct coeffitients
{

    double a, b, c;         // { a, b , c}|

};

struct roots                // { x1ref, x2ref, roots_ref}
{

    double x1ref, x2ref;
    int roots_ref;

};

struct test_param            // { kef , ans }
{

   coeffitients kef;
   roots ans;

};


//int one_test_solve(double a, double b, double c, double x1ref, double x2ref, int roots_ref);
int one_test_solve(test_param* data);

int run_test_solve(void);
