#include <stdio.h>
#include "main_instruments.h"

int main(const int argc, const char* const argv[])
{
    if (argc == 1) {

        help_me(argv);

    } else {

        output_description(argc, argv);

    }

    return 0;

}
