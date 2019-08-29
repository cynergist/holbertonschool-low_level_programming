# 0x1B. C - Sorting algorithms & Big O

## Resources
[Sorting algorithm wiki page](https://en.wikipedia.org/wiki/Sorting_algorithm) </br >
[Canonicalization wiki page](https://en.wikipedia.org/wiki/Canonicalization) </br >
[Big O notation stackoverflow](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation) </br >
[Big O notation](https://theendian.com/blog/big-o-notation-explained-with-examples/) </br >
[Sorting algorithms animations toptal.com](https://www.toptal.com/developers/sorting-algorithms) </br >
[Sorting at Visualgo.net](https://visualgo.net/en/sorting) </br >
[A tour of the top 5 sorting alorithms with Python code](https://medium.com/@george.seif94/a-tour-of-the-top-5-sorting-algorithms-with-python-code-43ea9aa02889) </br >

## Compilation & Output
- These algorithms are compiled with gcc 4.8.4 using the flags </br >
`-Wall` `-Werror` `-Wextra` `-pedantic` </br >

For example: </br >
`$ gcc -Wall -Werror -Wextra -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble`

## Tests
[To help test sorting algorithms with big sets of random integers - random.org integer sets](https://www.random.org/integer-sets/) <br />

## Tasks

0. 0-bubble_sort.c, 0-O // a function that sorts an array of integers in ascending order using the Bubble sort algorithm

- Prototype: void bubble_sort(int *array, size_t size);
- Prints the array after each time you swap two elements (See example below)

The file 0-O holds the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

1. 1-insertion_sort_list.c, 1-O // a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

- Prototype: void insertion_sort_list(listint_t **list);
- Disallowed: modifying the integer n of a node. Swap the nodes themselves.
- Print the list after each time you swap two elements

The file 1-0 holds the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

2. 2-selection_sort.c, 2-O // a function that sorts an array of integers in ascending order using the Selection sort algorithm

- Prototype: void selection_sort(int *array, size_t size);
- Print the array after each time you swap two elements (See example below)

The file 2-O holds the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

3. 3-quick_sort.c, 3-O // a function that sorts an array of integers in ascending order using the Quick sort algorithm

- Prototype: void quick_sort(int *array, size_t size);
- Implementation of the Lomuto partition scheme.
- Pivot should always be the last element of the partition being sorted.
- Prints the array after each time you swap two elements

The file 3-O holds the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case