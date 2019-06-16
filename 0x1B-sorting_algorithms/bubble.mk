# The compiler school requires
GCC = gcc
# Compiler flags required by tasks at compilation time
CFLAGS = -Wall -Werror -Wextra -pedantic
# Header file used
DEPS = sort.h

SRCS = $(0-bubble_sort) $(0-main) $(print_array)

OBJS = (SRCS:.c=.o)
PROG = cmd

cmd: 	$(DEPS)

	$(GCC) $(CFLAGS) $(SRCS) -o $@

all: $(PROG)

clean:
	$(RM) *.o
	$(RM) $(PROG)
