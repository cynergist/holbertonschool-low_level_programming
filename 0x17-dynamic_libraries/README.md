# 0x17. C - Dynamic Libraries

## Resources
- [What is difference between Dynamic and Static library(Static and Dynamic linking)] (https://www.youtube.com/watch?v=eW5he5uFBNM)
- [linux create dynamic library] (https://www.google.com/search?q=linux+create+dynamic+library&cad=h)
- [Shared libraries with GCC on Linux] (https://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html)

## General Requirements
- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

## Tasks
0. libholberton.so, holberton.h // Create the dynamic library libholberton.so containing all the functions listed below:
int _putchar(char c); <
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

1. 1-create_dynamic_lib.sh //  a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

2. Blog post describing the differences between static and dynamic libraries. It should cover:

- Why using libraries in general
- How do they work
- How to create them (Linux only)
- How to use them (Linux only)
- What are the differences between static and dynamic libraries
- What are the advantages and drawbacks of each of them

[On Medium](https://medium.com/@671_31477/what-is-the-story-with-dynamic-and-static-libraries-4087bc6b8173)