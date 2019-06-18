#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* sorting_helpers.c */
void swap_ints(int *a, int *b);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* 0-bubble_sort.c */
void bubble_sort(int *array, size_t size);

/* 1-insertion_sort_list.c */
void insertion_sort_list(listint_t **list);

/* 2-selection_sort.c */
void selection_sort(int *array, size_t size);

/* 3-quick_sort.c */
void quick_sort(int *array, size_t size);

/* 100-shell_sort.c */
void shell_sort(int *array, size_t size);

/* 101-cocktail_sort_list.c */
void cocktail_sort_list(listint_t **list);

/* 102-counting_sort.c */
void counting_sort(int *array, size_t size);

/* 103-merge_sort.c */
void merge_sort(int *array, size_t size);

/* 104-heap_sort.c */
void heap_sort(int *array, size_t size);

/* 105-radix_sort.c */
void radix_sort(int *array, size_t size);

/* 106-bitonic_sort.c */
void bitonic_sort(int *array, size_t size);

/* 107-quick_sort_hoare.c */
void quick_sort_hoare(int *array, size_t size);

/* 1000-sort_deck.c */
/* void sort_deck(deck_node_t **deck); */

#endif /* SORT_H */
