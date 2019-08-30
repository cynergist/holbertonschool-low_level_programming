GCC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
DEPS = search_algos.h

0-linear: ${DEPS}
	${GCC} $(CFLAGS) $@.c 0-main.c -o $@

1-binary: ${DEPS}
	${GCC} $(CFLAGS) $@.c 1-main.c -o $@

clean:
	$(RM) *.o
	$(RM) 0-linear
	$(RM) 1-binary
