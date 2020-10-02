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
 * @file Mohanandan_Coursera
 * @brief Analyse the array parameters
 * In this program, an array is given. Print the given array
 * Then sort the given array in descending order.  
 * Print the array statistics such as mean, median, maximum and minimum value of the given array. 
 *
 * @author Sangeetha Mohanandan
 * @date 28/10/2020
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{

  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Given an array of size 40 shown below\n");
  print_array(test, SIZE);
  printf("The sorted array is\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);
}
void print_array(unsigned char *ptr, int count)
{
}
float find_mean(unsigned char *ptr, int count)
{
}
unsigned char find_maximum(unsigned char *ptr, int count)
{
}
unsigned char find_minimum(unsigned char *ptr, int count)
{
}
void sort_array(unsigned char *numbers, int count)
{
}
unsigned char find_median(unsigned char array[], int count)
{
}
void print_statistics(unsigned char ptr[], int count)
{
}
/* Add other Implementation File Code Here */
