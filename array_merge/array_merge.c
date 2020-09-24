#include "mergesort.h"
#include "mergesort.c"
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

  int tempSize = 0;

  for (int i = 0; i < num_arrays; i++){
    tempSize = tempSize + sizes[i]; // this adds all sizes up to get a size for our temp array. 
  }

  int *tArray = (int*) calloc(tempSize, sizeof(int)); //just like mergesort, we need to allocate memory needed.

  int index = 0; // for counting the index position.

  for (int n = 0; n < num_arrays; n++){ //goes through all the arrays
    for (int s = 0; s < sizes[n]; s++){ //goes through each array by grabbing n arrays size
      if (is_unique(values[n][s], index, tArray)){
	tArray[index] = values[n][s]; //if it is unqiue, adds it to the temp array
	index++;
      }
    }
  }

  int *resultArray = (int*) calloc(index+1, sizeof(int)); //allocates more space for the resulted array just like mergesort and above.
  resultArray[0] = 0; //sets the first element as zero so we have a starting point

  for (int l =0; l < index; l++){
    resultArray[l+1] = tArray[l];
  }

  free(tArray); //finally can free up all the memory that was allocated for the temp array

  mergesort(index+1, resultArray); //after they have been combined, we can call mergesort and sort the array.
  resultArray[0] = index; //sets the first item as the length of the final array
  
  return resultArray;
}
