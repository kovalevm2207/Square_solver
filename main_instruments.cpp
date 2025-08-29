#include "main_instruments.h"


void output_description(const int argc, const char* const argv[])
{

    for (int i = 1; i < argc; i++) {

        if        (strcmp(argv[i], "--help") == 0) {

            help_me(argv);

        } else if (strcmp(argv[i], "--solve") == 0) {

            square();

        } else if (strcmp(argv[i], "--test") == 0) {

            FILE* file = fopen(argv[i + 1], "r");

            if (file == NULL) {

                base_test();

            } else {

                i++;
                base_test();
                added_test(file);


            }

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
