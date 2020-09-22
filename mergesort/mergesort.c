#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "mergesort.h"

void mergesort(int size, int values*) {
  mergeSortRange(values, 0, size);
  return;
}

void mergeSortRange(int *values, int startIndex, int endIndex) {
  int rangeSize = endIndex - startIndex;
  if (needsSorting(rangeSize)){
    int midPoint = (startIndex + endIndex) / 2;
    mergeSortRange(values, startIndex, midPoint);
    mergeSortRange(values, midPoint, endIndex);
    mergeRanges(values, startIndex, midPoint, endIndex);
  }
}
