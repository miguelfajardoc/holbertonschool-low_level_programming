#ifndef SEARCH
#define SEARCH

#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
void print_array(int *array, int first, int last);

#endif
