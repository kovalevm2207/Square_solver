#include <stdio.h>
#include "main_instruments.h"
#include "my_assert.h"

int main(const int argc, const char* const argv[])
{

    my_assert(argv != 0);

    if (argc == 1) {

        help_me(argv);

    } else {

        output_description(argc, argv);

    }

    return 0;

}
