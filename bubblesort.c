/** @file bublesort.c
 *  @brief Function definitions for the bubble sort library.
 *
 *  This contains the prototypes for the console
 *  driver and eventually any macros, constants,
 *  or global variables you will need.
 *
 *  @author Eduardo Herrera
 *  @bug No known bugs.
 */
 
#include <stdio.h>
#include "bubblesort.h"

/** @brief Sort the array 
 * 
 *  @param *array Pointer to access the array
 *  @param n Size of array
 *
 *  @return Void
 */
 
void bubble_sort(int *array, int n)
{
  int tempo;
  for (int i=0; i<(n-1); i++)
  {
    for (int j=0 ; j<n-i-1; j++)
    {
      if (array[j] > array[j+1])
      { 
        tempo      = array[j];
        array[j]   = array[j+1];
        array[j+1] = tempo;
      }
    }
  }
}


/** @brief Fill the array 
 * 
 *  @param *array Pointer to access the array
 *  @param n Size of array
 *
 *  @return Void
 */


  
 void fill_array(int *array, int size)
 {
    int validacion, temporal;
    for(int i=0;i<size;i++)    
    {
        printf("Valor del arreglo %d: ",i);
        validar(array,i);
    }  
 }


/** @brief Print the array 
 * 
 *  @param *array Pointer to access the array
 *  @param n Size of array
 *
 *  @return Void
 */
 void print_array(int *array, int size)
 {
    printf("{ ");
    for (int c = 0; c < size ; c++ )
       printf("%d, ", array[c]);
    printf("}\n");
 }


/** @brief Validar numeros 
 * 
 *  @param *array Array
 *  @param i Position of array to validate
 *
 *  @return Void
 */


void validarValoresArreglo(int *array, int i){
     int validacion, temporal;
        validacion = scanf("%d",&array[i]);
        while(validacion!=1)
        {
          while((temporal=getchar()) != EOF && temporal != '\n');
          printf("Numero Invalido...\nValor del arreglo %d: ",i);
          validacion = scanf("%d", &array[i]);
        }
 }

