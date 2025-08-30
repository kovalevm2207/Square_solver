#include "main_instruments.h"


void output_description(const int argc, const char* const argv[])
{

    my_assert(argv != 0);

    for (int i = 1; i < argc; i++) {

        if        (strcmp(argv[i], "--help") == 0) {

            help_me(argv);

        } else if (strcmp(argv[i], "--solve") == 0) {

            square();

        } else if (strcmp(argv[i], "--test") == 0) {

            i += test(argv, i);

        } else {

            help_me(argv);

        }

    }

}



void help_me(const char* const argv[])
{

    printf("usage: a.out [--help] [--solve] [--test]\n"
                       "\n"
                       "These are common %s commands used in various situations:\n"
                       "\n"
                       "    help     cli flags help message\n"
                       "    solve    equation solving mode\n"
                       "    test     test mode for debugging the program\n"
                       "\n\n" CHANGE_ON PURPLE TEXT_COLOR "---------------------------------------------------------------------------- COMMIT GITHUB" RESET "\n"
                       , argv[0]);

}
