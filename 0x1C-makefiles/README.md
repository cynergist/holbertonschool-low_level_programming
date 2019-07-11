# 0x1C. C - Makefiles

## Resources
[Colby's A Simple Makefile Tutorial](http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/) </br >
[Opensource.com's What is a Makefile and how does it work?](https://opensource.com/article/18/8/what-how-makefile) </br >

## Compilation & Output
- These functions are compiled with gcc 4.8.4 using the flags </br >
`-Wall` `-Werror` `-Wextra` `-pedantic` </br >
- OS: Ubuntu 14.04 LTS
- Version of `gcc`: 4.8.4
`Version of `make`: GNU Make 3.81

For example: </br >
`$ gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton`

## Tasks

0. 0-Makefile // My first seahorse Makefile.
- name of the executable: `holberton`
- rules: `all`
- The `all` rule builds my executable
- variables: none

1. 1-Makefile // All rule builds executable.
- name of the executable: `holberton`
- rules: `all`
- variables: `CC` (The compiler we're using) , `SRC` (the .c files)

2. 2-Makefile // My second useful Makefile. My [first one is here](https://github.com/cynergist/holbertonschool-low_level_programming/blob/master/0x1B-sorting_algorithms/Makefile).

3. 3-Makefile // Building on Makefile 2.
- name of the executable: `holberton`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
- `all`: builds my executable
- `clean`: deletes all Emacs temporary files along with the executable
- `oclean`: deletes the object files
- `fclean`: deletes the Emacs temporary files, the executable, and the object files
- `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
- `CC`: the compiler to be used
- `SRC`: the `.c` files
- `OBJ`: the `.o` files
- `NAME`: the name of the executable
- `RM`: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files

4. 4-Makefile // List of `.o` files not allowed.
- name of the executable: `holberton`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
- `all`: builds my executable
- `clean`: deletes all Emacs temporary files along with the executable
- `oclean`: deletes the object files
- `fclean`: deletes the Emacs temporary files, the executable, and the object files
- `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
- `CC`: the compiler to be used
- `SRC`: the `.c` files
- `OBJ`: the `.o` files
- `NAME`: the name of the executable
- `RM`: the program to delete files
- `CFLAGS`: school's favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files
/List of all the `.o` files **disallowed**/

5. 5-island_perimeter.py // Technical interview preparation:

- I was not allowed to google anything
- Whiteboard first
Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`:

- `grid` is a list of list of integers:
- 0 represents a water zone
- 1 represents a land zone
- One cell is a square with side length 1
- Grid cells are connected horizontally/vertically (not diagonally).
- Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
Requirements:

- First line contains `#!/usr/bin/python3`
- I was not allowed to import any module
- Module and function must be documented

6. 100-Makefile // make -f 100-Makefile
- name of the executable: `holberton`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
- `all`: builds my executable
- `clean`: deletes all Emacs temporary files along with the executable
- `oclean`: deletes the object files
- `fclean`: deletes the Emacs temporary files, the executable, and the object files
- `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
- `CC`: the compiler to be used
- `SRC`: the `.c` files
- `OBJ`: the `.o` files
- `NAME`: the name of the executable
- `RM`: the program to delete files
- `CFLAGS`: school's favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files
- name of the executable: `holberton`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
- `all`: builds my executable
- `clean`: deletes all Emacs temporary files along with the executable
- `oclean`: deletes the object files
- `fclean`: deletes the Emacs temporary files, the executable, and the object files
- `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
- `CC`: the compiler to be used
- `SRC`: the `.c` files
- `OBJ`: the `.o` files
- `NAME`: the name of the executable
- `RM`: the program to delete files
- `CFLAGS`: school's favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- I was not allowed to have a list of all the `.o` files
- I had to use `$(RM)` for the cleaning up rules, but you are not allowed to set the `RM` variable
- I was not allowed to use the string `$(CC)` more than once in your Makefile
- I was only allowed to use the string `$(RM)` twice in your Makefile
- I was not allowed to use the string `$(CFLAGS)` (but the compiler should still use the flags you set in this variable)
- I was not allowed to have an `$(OBJ)` rule
- I was not allowed to use the `%.o: %.c` rule
- My Makefile should work even if there is a file in the folder that has the same name as one of my rules
- My Makefile should not compile if the header file `m.h` is missing
