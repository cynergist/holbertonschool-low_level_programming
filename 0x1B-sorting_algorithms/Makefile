# The compiler school requires
GCC = gcc
# Compiler flags required by tasks at compilation time
CFLAGS = -Wall -Werror -Wextra -pedantic
# Header file used
DEPS = sort.h

0-bubble_sort: ${DEPS}
	${GCC} $(CFLAGS) $@.c 0-main.c print_array.c -o $@

1-insertion_sort_list: ${DEPS}
	${GCC} $(CFLAGS) $@.c 1-main.c print_list.c -o $@

2-selection_sort: ${DEPS}
	${GCC} $(CFLAGS) $@.c 2-main.c print_array.c -o $@

3-quick_sort: ${DEPS}
	${GCC} $(CFLAGS) $@.c 3-main.c print_array.c -o $@

clean:
	$(RM) *.o
	$(RM) 0-bubble_sort
	$(RM) 1-insertion_sort_list
	$(RM) 2-selection_sort
	$(RM) 3-quick_sort
