#include "main_instruments.h"


void help_me(void)
{

    printf("usage: a.out [--help] [--solve] [--test]\n"
                       "\n"
                       "These are common a.out commands used in various situations:\n"
                       "\n"
                       "    help     cli flags help message\n"
                       "    solve    equation solving mode\n"
                       "    test     test mode for debugging the program\n"
                       "\n");

}

int output_description(const int argc, const char* const argv[])
{

    for (int i = 1; i < argc; i++) {

        if (strcmp(argv[i], "--help") == 0) {

             help_me();

        } else if (strcmp(argv[i], "--solve") == 0) {

            int check_square = square();

            if ( check_square == 1 ) {

                return 1;

            }

        } else if (strcmp(argv[i], "--test") == 0) {

            int check_test = test();

            if ( check_test == 1 ) {

                return 1;
                    }

        } else {

            help_me();

        }

    }

    return 0;

}
