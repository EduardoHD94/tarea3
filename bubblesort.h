/** @file bubblesort.h
 *  @brief Function prototypes for the bubblesort library.
 *
 *  This contains the prototypes for the console
 *  driver and eventually any macros, constants,
 *  or global variables you will need.
 *
 *  @author Eduardo Herrera
 *  @bug No known bugs.
 */

#ifndef BUBLESORT
#define BUBLESORT 
#include <stdio.h>

/** @brief Sort the array 
 * 
 *  @param *array Pointer to access the array
 *  @param n Size of array
 *
 *  @return Void
 */
void bubble_sort(int *, int);

/** @brief Fill the array 
 * 
 *  @param *array Pointer to access the array
 *  @param n Size of array
 *
 *  @return Void
 */
void fill_array(int *, int);

/** @brief Print the array 
 * 
 *  @param *array Pointer to access the array
 *  @param n Size of array
 *
 *  @return Void
 */
void print_array(int *, int);

/** @brief Validar numeros 
 * 
 *  @param *array Array
 *  @param i Position of array to validate
 *
 *  @return Void
 */
void validarValoresArreglo(int *,int);

#endif