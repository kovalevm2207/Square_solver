DED_FLAGS_DEFAULT=-ggdb3 -std=c++17 -O0 -Wall -Wextra -Weffc++ -Waggressive-loop-optimizations -Wc++14-compat \
				  -Wmissing-declarations -Wcast-align -Wcast-qual -Wchar-subscripts -Wconditionally-supported \
				  -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-nonliteral -Wformat-security \
				  -Wformat-signedness -Wformat=2 -Winline -Wlogical-op -Wnon-virtual-dtor -Wopenmp-simd -Woverloaded-virtual \
				  -Wpacked -Wpointer-arith -Winit-self -Wredundant-decls -Wshadow -Wsign-conversion -Wsign-promo \
				  -Wstrict-null-sentinel -Wstrict-overflow=2 -Wsuggest-attribute=noreturn -Wsuggest-final-methods \
				  -Wsuggest-final-types -Wsuggest-override -Wswitch-default -Wswitch-enum -Wsync-nand -Wundef \
				  -Wunreachable-code -Wunused -Wuseless-cast -Wvariadic-macros -Wno-literal-suffix -Wno-missing-field-initializers \
				  -Wno-narrowing -Wno-old-style-cast -Wno-varargs -Wstack-protector -fcheck-new -fsized-deallocation \
				  -fstack-protector -fstrict-overflow -flto-odr-type-merging -fno-omit-frame-pointer -Wlarger-than=8192 \
				  -Wstack-usage=8192 -pie -fPIE -Werror=vla \
				  -fsanitize=address,alignment,bool,bounds,enum,float-cast-overflow,float-divide-by-zero,integer-divide-by-zero,leak,nonnull-attribute,null,object-size,return,returns-nonnull-attribute,shift,signed-integer-overflow,undefined,unreachable,vla-bound,vptr
DED_FLAGS_L= $(DED_FLAGS_DEFAULT)
DED_FLAGS_A="-D NDEBUG $(DED_FLAGS_DEFAULT)"





all:   square.o   get_coefficients.o   print_solution.o   help_func.o   solve_equation.o

	@g++ $(DED_FLAGS_L) square.o   get_coefficients.o   print_solution.o   help_func.o   solve_equation.o

test: test_main.o   test_solve.o   solve_equation.o   help_func.o

	@g++ $(DED_FLAGS_L)  test_main.o   test_solve.o   solve_equation.o   help_func.o





square.o: square.cpp

	@g++ $(DED_FLAGS_L) square.cpp -c

get_coefficients.o: get_coefficients.cpp get_coefficients.h

	@g++ $(DED_FLAGS_L) get_coefficients.cpp -c

print_solution.o: print_solution.cpp print_solution.h

	@g++ $(DED_FLAGS_L) print_solution.cpp -c

help_func.o: help_func.cpp help_func.h

	@g++ $(DED_FLAGS_L) help_func.cpp -c

solve_equation.o: solve_equation.cpp solve_equation.h

	@g++ $(DED_FLAGS_L) solve_equation.cpp -c

test_solve.o: test_solve.cpp test_solve.h

	@g++ $(DED_FLAGS_L) test_solve.cpp -c

test_main.o: test_main.cpp

	@g++ $(DED_FLAGS_L) test_main.cpp -c





assert:   square_assert.o   get_coefficients_assert.o   print_solution_assert.o   help_func_assert.o   solve_equation_assert.o

	@g++ $(DED_FLAGS_A) square.o   get_coefficients.o   print_solution.o   help_func.o   solve_equation.o


test_assert: test_main_assert.o   test_solve_assert.o   solve_equation_assert.o   help_func_assert.o

	@g++ $(DED_FLAGS_A) test_main.o   test_solve.o   solve_equation.o   help_func.o




square_assert.o: square.cpp

	@g++ $(DED_FLAGS_A) square.cpp -c

get_coefficients_assert.o: get_coefficients.cpp get_coefficients.h

	@g++ $(DED_FLAGS_A) get_coefficients.cpp -c

print_solution_assert.o: print_solution.cpp print_solution.h

	@g++ $(DED_FLAGS_A) print_solution.cpp -c

help_func_assert.o: help_func.cpp help_func.h

	@g++ $(DED_FLAGS_A) help_func.cpp -c

solve_equation_assert.o: solve_equation.cpp solve_equation.h

	@g++ $(DED_FLAGS_A) solve_equation.cpp -c

test_solve_assert.o: test_solve.cpp test_solve.h

	@g++ $(DED_FLAGS_A) test_solve.cpp -c

test_main_assert.o: test_main.cpp

	@g++ $(DED_FLAGS_A) test_main.cpp -c








clean:

	rm *.o
