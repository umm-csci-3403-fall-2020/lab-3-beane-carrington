#include "mergesort.h"
#include "array_merge.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_unique(int n, int index, int* temp){ // function for determing if a value is unique among the other arrays
  bool unique = true; // starts off by setting it as true
  for (int i = 0; i < index; i++){
    if (n == temp[i]){
      unique = false; // sets unique to false if it finds the same value
      return unique;
    }
  }
  return unique;
}


int* array_merge(int num_arrays, int* sizes, int** values) {
  
  return sizes;
}
