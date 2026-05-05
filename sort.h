#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - doubly linked list node
 * @n: integer
 * @prev: previous node
 * @next: next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* bubble sort */
void bubble_sort(int *array, size_t size);

/* insertion sort */
void insertion_sort_list(listint_t **list);

/* selection sort */
void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
/* provided functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif
