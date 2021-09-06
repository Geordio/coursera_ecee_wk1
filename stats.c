/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c:
 * @brief functions to manipulate and report on a basic dataset
 *
 *
 *
 * @author Andrea Llewellyn
 * @date 05/09/2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Test Data: \n" );
  print_array(test, SIZE);

  sort_array(test, SIZE);

  // unsigned char data[SIZE] = test *;
  printf("Sorted Data: \n" );
  print_array(test, SIZE);

  unsigned char median = find_median(test, SIZE);
  unsigned char mean = find_mean(test, SIZE);
  unsigned char max = find_maximum(test, SIZE);
  unsigned char min = find_minimum(test, SIZE);

  print_statistics(min, max, mean, median);
}

/* Add other Implementation File Code Here */

void print_statistics(int minimum, int maximum, int mean, int median) {
  /* stubbed */

  printf("--------------------------------------------\n");

  printf("Maximum: %i\n", maximum);
  printf("Minimum: %i\n", minimum);
  printf("Mean:    %i\n", mean);
  printf("Median:  %i\n", median);
  printf("--------------------------------------------\n");
}


void print_array(unsigned char data[], int length) {

  printf("array: \n");

  for(int i=0; i < length; i++) {
    printf("%i\t", data[i]);

    // add a new line every 8 elements to format it nicely
    if ((i+1 )% 8 == 0)  {
      printf("\n");
    }
  }
  printf("\n");
}


// brief requests that values are rounded down so use a char to return value
unsigned char find_median(unsigned char data[], int length) {
  /* stubbed */

// need to determine if dataset has even number of elements and handle differently
// if even number, then the median is the average of the 2 middle values
unsigned char median = 0;

  if (length % 2 == 0) {
    // is even
    median = (data[length/2-1] + data[length/2])/2;
  }
  else {
    // is odd
    median = data[length/2-1];
  }
}

// brief requests that values are rounded down so use a char to return value
unsigned char find_mean(unsigned char data[], int length) {
  /* stubbed */
    unsigned int total = 0;

    for (int i = 0; i < length; i++){
      total += data[i];
    }

// temp to check the rounding down of the mean
    // double test = (float)total / (float)length;
    // printf("mean: %f (%i, %i)", test, total, length);

    return total / length;
}

unsigned char find_maximum(unsigned char data[], int length) {

  // define variable to hold the maximum value, set it to 0
  unsigned char max = 0;

  for (int i = 0; i < length; i++) {
    if (max < data[i]) {
      max = data[i];
    }
  }

  return max;
}

unsigned char find_minimum(unsigned char data[], int length) {

  unsigned char min = data[0];

  for (int i = 1; i < length; i++) {
    if (min > data[i]) {
      min = data[i];
    }
  }

  return min;
}


void sort_array(unsigned char data[], int length) {

  unsigned char temp = 0;

  for (int i = 0; i < length; i++){
    for (int j = i+1; j < length; j++){

      // printf( "comparing: %i, %i, %i, %i\n", i, j, data[i], data[j]);
      if(data[i] > data[j]){
        temp = data[i];
        data[i] = data[j];
        data[j] = temp;

      }
    }
  }
}
