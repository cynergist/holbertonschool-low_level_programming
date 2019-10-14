GCC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
DEPS = search_algos.h

0-linear: ${DEPS}
	${GCC} $(CFLAGS) $@.c 0-main.c -o $@

1-binary: ${DEPS}
	${GCC} $(CFLAGS) $@.c 1-main.c -o $@

100-jump: ${DEPS}
	${GCC} $(CFLAGS) $@.c 100-main.c -o $@

102-interpolation: ${DEPS}
	${GCC} $(CFLAGS) $@.c 102-main.c -o $@

103-exponential: ${DEPS}
	${GCC} $(CFLAGS) $@.c 103-main.c -o $@

104-advanced_binary: ${DEPS}
	${GCC} $(CFLAGS) $@.c 104-main.c -o $@

105-jump_list: ${DEPS}
	${GCC} $(CFLAGS) $@.c 105-main.c listint/*.c -lm -o $@

106-linear_skip: ${DEPS}
	${GCC} $(CFLAGS) $@.c 106-main.c skiplist/*.c -o $@

clean:
	$(RM) *.o
	$(RM) 0-linear
	$(RM) 1-binary
	$(RM) 102-interpolation
	$(RM) 103-exponential
	$(RM) 104-advanced_binary
	$(RM) 105-jump_list
	$(RM) 106-linear_skip
