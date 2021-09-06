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
 * @file stats.h
 * @brief declaration functions to manipulate and report on a basic dataset
 *
 * <Add Extended Description Here>
 *
 * @author Andrea Llewellyn
 * @date 05/09/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief Prints the results of the statistic analysis
 *
 * <Add Extended Description Here>
 *
 * @param minimum : the calculated min
 * @param maximum : the calculated max
 * @param mean: the calculated mean
 * @param median : the caultuated median
 *
 * @return void
 */
 void print_statistics(int minimum, int maximum, int mean, int median);

 /**
  * @brief Prints the passed array to screen
  *
  * <Add Extended Description Here>
  *
  * @param data: the data array to print
  * @param length : the length of the data
  *
  * @return void
  */
 void print_array(unsigned char data[], int length);

 /**
  * @brief finds the median value of the passed data array
  *
  * <Add Extended Description Here>
  *
  * @param data: the data array to print
  * @param length : the length of the data
  *
  * @return char of the median value
  */
 unsigned char find_median(unsigned char data[], int length);

 /**
  * @brief finds the mean value of the passed data array
  *
  * <Add Extended Description Here>
  *
  * @param data: the data array to analyse
  * @param length : the length of the data
  *
  * @return char of the mean value
  */
 unsigned char find_mean(unsigned char data[], int length);


 /**
  * @brief finds the max value of the passed data array
  *
  * <Add Extended Description Here>
  *
  * @param data: the data array to analyse
  * @param length : the length of the data
  *
  * @return max value
  */
 unsigned char find_maximum(unsigned char data[], int length);

 /**
  * @brief finds the min value of the passed data array
  *
  * <Add Extended Description Here>
  *
  * @param data: the data array to analyse
  * @param length : the length of the data
  *
  * @return char of the min value
  */
 unsigned char find_minimum(unsigned char data[], int length);

 /**
  * @brief sorts the passed data array
  *
  * <Add Extended Description Here>
  *
  * @param data: the data array to sort
  * @param length : the length of the data
  *
  * @return
  */
 void sort_array(unsigned char data[], int length);

#endif /* __STATS_H__ */
