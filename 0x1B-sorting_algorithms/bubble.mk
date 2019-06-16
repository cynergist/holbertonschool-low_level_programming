CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
DEPS = sort.h
SRCS = $(0-bubble_sort.c) $(0-main.c) $(print_array.c)
OBJS = (SRCS:.c=.o)
PROG = cmd

cmd: 	$(DEPS)
	@echo "testing $(CC)"
	$(CC) $(CFLAGS) $(OBJS) -o $@

all: $(PROG)

clean:
	$(RM) *.o
	$(RM) $(PROG)
