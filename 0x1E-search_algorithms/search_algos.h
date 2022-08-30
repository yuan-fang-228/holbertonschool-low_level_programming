#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stddef.h>
#include <stdio.h>

/* linear search algorithm */
int linear_search(int *array, size_t size, int value);

/* binary search algorithm */
int binary_search(int *array, size_t size, int value);

#endif
