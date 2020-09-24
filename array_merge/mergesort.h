#ifndef MERGESORT_H_GUARD
#define MERGESORT_H_GUARD

#include <stdbool.h>

#define UNIT_TESTING

void mergesort(int size, int values[]);
void mergesort_range(int *values, int startIndex, int endIndex);
void merge_ranges(int *values, int startIndex, int midPoint, int endIndex);
bool needs_sorting(int rangeSize);

#endif
