#include <stdio.h>
#include <stdlib.h>


#ifndef NDEBUG
#define my_assert(check)
#else
#define my_assert(check)\
    do {      \
        if (!check) { \
                  \
            printf("AXAXAXAXAXAXAXAXAXAXAXAXXX\n"     \
                "Ну ты мамкин программист, в таком метсе налажал\n"\
                "ASSERT failed on: line %d, file %s\n", __LINE__, __FILE__); \
                   \
            abort(); \
        }  \
    } while(0)
#endif
