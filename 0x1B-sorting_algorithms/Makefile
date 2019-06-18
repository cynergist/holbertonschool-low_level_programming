# The compiler school requires
GCC = gcc
# Compiler flags required by tasks at compilation time
CFLAGS = -Wall -Werror -Wextra -pedantic
# Header file used
DEPS = sort.h

0-bubble_sort: ${DEPS}
	${GCC} $(CFLAGS) $@.c 0-main.c sorting_helpers.c -o $@

clean:
	$(RM) *.o
	$(RM) 0-bubble_sort
