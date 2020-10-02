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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

void print_statistics(unsigned char ptr[], int count);
/**
 * @brief Print an array.
 *
 * This function takes inputs, an unsigned character that points to an array element and 
 * an integer value denotes the size of the array.
 * Instead of returning parameter, it will print the elements until the array ends.
 *
 * @param *ptr The element of array to be printed
 * @param count The size of the array to be printed
 *
 * @return No return value
 */
void print_array(unsigned char *ptr, int count);

/**
 * @brief Determines the mean of given array.
 *
 * This function takes inputs, an unsigned character that points to an array element and 
 * an integer value denotes the size of the array.
 * It will returned mean of the given array.
 *
 * @param *ptr This points to the  element of the array 
 * @param count The size of the array 
 *
 * @return The mean value of the array.
 */
float find_mean(unsigned char *ptr, int count);

/**
 * @brief Determines the maximum value of given array.
 *
 * This function takes inputs, an unsigned character that points to an array element and 
 * an integer value denotes the size of the array.
 * It will returned an unsigned character denotes the maximum value of the given array.
 *
 * @param *ptr This points to the  element of the array 
 * @param count The size of the array 
 *
 * @return The maximum value of the array.
 */
unsigned char find_maximum(unsigned char *ptr, int count);

/**
 * @brief Determines the minimum value of given array.
 *
 * This function takes inputs, an unsigned character that points to an array element and 
 * an integer value denotes the size of the array.
 * It will returned an unsigned character denotes the minimum value of the given array.
 *
 * @param *ptr This points to the  element of the array 
 * @param count The size of the array 
 *
 * @return The minimum value of the array.
 */

unsigned char find_minimum(unsigned char *ptr, int count);
/**
 * @brief Sort the given array in descending order array.
 *
 * This function takes inputs, an unsigned character that points to an array element and 
 * an integer value denotes the size of the array.
 * Instead of returning any parameter, it will sorts the elements of the array in descending order.
 * @param *numbers Points to the elements of an array to be sorted
 * @param count The size of the array to be sorted
 *
 * @return No return value
 */
void sort_array(unsigned char *numbers, int count);
/**
 * @brief Determines the median of given array.
 *
 * This function takes inputs, an unsigned character array and 
 * an integer value denotes the size of the array.
 * It will returned an unsigned character denotes the median of the given array.
 *
 * @param array The given array to find the median 
 * @param count The size of the array 
 *
 * @return The median of the array.
 */

unsigned char find_median(unsigned char array[], int count);

/**
 * @brief Print the statistics of an array.
 *
 * This function takes inputs, an unsigned character array  and 
 * an integer value denotes the size of the array.
 * Instead of returning parameter, it will print the statics of the array including mean, median, maximum and minimum value of the array.
 *
 * @param ptr[] The array to print the statistics
 * @param count The size of the array 
 *
 * @return No return value
 */
void print_statistics(unsigned char ptr[], int count);
#endif /* __STATS_H__ */
