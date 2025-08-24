DED_FLAGS_W=-Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal \
		  -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs \
		  -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe \
		  -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body \
		  -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wno-missing\
		   -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith \
		  -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel \
		  -Wtype-limits -Wwrite-strings -Werror=vla -D_DEBUG -D_EJUDGE_CLIENT_SIDE

DED_FLAGS_L=-D _DEBUG -ggdb3 -std=c++17 -O0 -Wall -Wextra -Weffc++ -Waggressive-loop-optimizations -Wc++14-compat\
			-Wmissing-declarations -Wcast-align -Wcast-qual -Wchar-subscripts -Wconditionally-supported \
			-Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-nonliteral -Wformat-security \
			-Wformat-signedness -Wformat=2 -Winline -Wlogical-op -Wnon-virtual-dtor -Wopenmp-simd \
			-Woverloaded-virtual -Wpacked -Wpointer-arith -Winit-self -Wredundant-decls -Wshadow \
			-Wsign-conversion -Wsign-promo -Wstrict-null-sentinel -Wstrict-overflow=2 \
			-Wsuggest-attribute=noreturn -Wsuggest-final-methods -Wsuggest-final-types -Wsuggest-override \
			-Wswitch-default -Wswitch-enum -Wsync-nand -Wundef -Wunreachable-code -Wunused -Wuseless-cast \
			-Wvariadic-macros -Wno-literal-suffix -Wno-missing-field-initializers -Wno-narrowing \
			-Wno-old-style-cast -Wno-varargs -Wstack-protector -fcheck-new -fsized-deallocation \
			-fstack-protector -fstrict-overflow -flto-odr-type-merging -fno-omit-frame-pointer \
			-Wlarger-than=8192 -Wstack-usage=8192 -pie -fPIE -Werror=vla \
			-fsanitize=address,alignment,bool,bounds,enum,float-cast-overflow,float-divide-by-zero,integer-divide-by-zero,leak,nonnull-attribute,null,object-size,return,returns-nonnull-attribute,shift,signed-integer-overflow,undefined,unreachable,vla-bound,vptr

all:    square.o   get_coefficients.o   print_solution.o   help_func.o   solve_equation.o   test_solve.o

	@g++ $(DED_FLAGS_W) square.o   get_coefficients.o   print_solution.o   help_func.o   solve_equation.o   test_solve.o

square.o: square.cpp

	@g++ $(DED_FLAGS_W) square.cpp -c

get_coefficients.o: get_coefficients.cpp

	@g++ $(DED_FLAGS_W) get_coefficients.cpp -c

print_solution.o: print_solution.cpp

	@g++ $(DED_FLAGS_W) print_solution.cpp -c

help_func.o: print_solution.cpp

	@g++ $(DED_FLAGS_W) help_func.cpp -c

solve_equation.o: solve_equation.cpp

	@g++ $(DED_FLAGS_W) solve_equation.cpp -c

test_solve.o: test_solve.cpp

	@g++ $(DED_FLAGS_W) test_solve.cpp -c

clean:

	rm *.o
