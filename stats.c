/******************************************************************************
 * Copyright (C) 2020 Sangeetha Mohanandan
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Sangeetha Mohanandan is not liable for any
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
 * @date 02/10/2020
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
  printf("\n\t The sorted array is\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);
}
/* Function to print an aaray*/
void print_array(unsigned char *ptr, int count)
{
  int i;
  printf("\n");

  for (i = 0; i < count; i++)
  {
    printf("%d ", *ptr);
    ptr++;
  }
}
/* Function to find mean of an aaray*/
float find_mean(unsigned char *ptr, int count)
{
  int i;
  int sum = 0;
  if (ptr == NULL)
  {
    return 0;
  }

  if (count <= 0)
  {
    count = 1;
  }

  for (i = 0; i < count; i++)
  {
    sum += *ptr;
    ptr++;
  }

  return (sum / count);
}
/* Function to find maximum value of an aaray*/
unsigned char find_maximum(unsigned char *ptr, int count)
{
  int i;
  unsigned char maximum;
  if (ptr == NULL)
  {
    return 0;
  }

  if (count <= 0)
  {
    return 0;
  }

  for (i = 0; i < count; i++)
  {
    if (maximum < *ptr)
    {

      maximum = *ptr;
    }
    ptr++;
  }

  return maximum;
}
/* Function to find minimum value of an aaray*/
unsigned char find_minimum(unsigned char *ptr, int count)
{
  int i;
  unsigned char minimum;
  if (ptr == NULL)
  {
    return 0;
  }

  if (count <= 0)
  {
    return 0;
  }

  for (i = 0; i < count; i++)
  {
    if (minimum > *ptr)
    {

      minimum = *ptr;
    }
    ptr++;
  }

  return minimum;
}
/* Function to sort an aaray*/
void sort_array(unsigned char *numbers, int count)
{
  int i;
  int j;
  int temp;
  for (int i = 0; i < count; i++)
  {
    for (int j = i + 1; j < count; j++)
    {
      if (numbers[i] < numbers[j])
      {
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
      }
    }
  }
}
/* Function to find median of an aaray*/
unsigned char find_median(unsigned char array[], int count)
{
  int med_ptr;
  // if number of elements are even
  if (count % 2 == 0)
  {
    return (array[(count - 1) / 2] + array[count / 2]) / 2;
  }
  // if number of elements are odd
  else
  {
    med_ptr = ((count + 1) / 2);
    return array[med_ptr];
  }
}
/* Function to print statistics of an aaray*/
void print_statistics(unsigned char ptr[], int count)
{
  printf("\n\tmean is %f", find_mean(ptr, count));
  printf("\n\tMaximum is %d", find_maximum(ptr, count));
  printf("\n\tMinimum is %d", find_minimum(ptr, count));
  printf("\n\tMedian is %d", find_median(ptr, count));
}
/* Add other Implementation File Code Here */
