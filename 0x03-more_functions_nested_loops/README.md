**0x03. C - More functions, more nested loops**
Year 1 - Low-level programming & Algorithm ― Hatching out

by Julien Barbier, co-founder at Holberton School

# Resources <br />

[Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss) <br />
[C - Functions](http://www.tutorialspoint.com/cprogramming/c_functions.htm) <br />
[Learning to Program in C (Part 06) (stop at 14:00)](https://www.youtube.com/watch?v=qMlnFwYdqIw) <br />
[What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/) <br />
[C - Header Files (stop before the “Once-Only Headers” paragraph)](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) <br />

# Learning Objectives <br />
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General <br />
- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra
- What are header files and how to to use them with #include

# Requirements <br />
## General <br />
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
- Don’t forget to push your header file

# More Info <br />
You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.

# Tasks <br />

0. 0-isupper.c // a function that checks for uppercase character.

- Prototype: int _isupper(int c);
- Returns 1 if c is uppercase
- Returns 0 otherwise

FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

1. 1-isdigit.c // a function that checks for a digit (0 through 9).

- Prototype: int _isdigit(int c);
- Returns 1 if c is a digit
- Returns 0 otherwise

FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

2. 2-mul.c // a function that multiplies two integers.

- Prototype: int mul(int a, int b);

3. 3-print_numbers.c // a function that prints the numbers, from 0 to 9, followed by a new line.

- Prototype: void print_numbers(void);
- You can only use _putchar twice in your code

4. 4-print_most_numbers.c // a function that prints the numbers, from 0 to 9, followed by a new line.

- Prototype: void print_most_numbers(void);
- Do not print 2 and 4
- You can only use _putchar twice in your code

5. 5-more_numbers.c // a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

- Prototype: void more_numbers(void);
- You can only use _putchar three times in your code

6. 6-print_line.c // a function that draws a straight line in the terminal.

- Prototype: void print_line(int n);
- You can only use _putchar function to print
- Where n is the number of times the character _ should be printed
- The line should end with a \n
- If n is 0 or less, the function should only print \n

7. 7-print_diagonal.c // a function that draws a diagonal line on the terminal.

- Prototype: void print_diagonal(int n);
- You can only use _putchar function to print
- Where n is the number of times the character \ should be printed
- The diagonal should end with a \n
- If n is 0 or less, the function should only print a \n

8. 8-print_square.c // a function that prints a square, followed by a new line.

- Prototype: void print_square(int size);
- You can only use _putchar function to print
- Where size is the size of the square
- If size is 0 or less, the function should print only a new line
- Use the character # to print the square

9. 9-fizz_buzz.c // The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

- Each number or word should be separated by a space
- You are allowed to use the standard library

10. 10-print_triangle.c // a function that prints a triangle, followed by a new line.

- Prototype: void print_triangle(int size);
- You can only use _putchar function to print
- Where size is the size of the triangle
- If size is 0 or less, the function should print only a new line
- Use the character # to print the triangle
