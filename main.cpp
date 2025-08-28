#include <stdio.h>
#include "main_instruments.h"

int main(const int argc, const char* const argv[])
{
    if (argc == 1) {

        help_me();

    } else {

        int check_discription = output_description(argc , argv );

        if (check_discription == 1) {

            return 1;

        }

    }

    return 0;

}
