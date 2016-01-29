/** @file main.c
 *  @brief The main program
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
 /** @brief The main program that do the bublesort
 * 
 *  @return 0
 */



int main()
{
  int size, *a;
  int validacion, temporal;
  printf("Ingresa el tamano del arreglo (Numero Positivo): ");
    
  validacion =scanf("%d", &size);

  while(validacion!=1)
  {
    while((temporal=getchar()) != EOF && temporal != '\n');
      printf("Numero Invalido...Ingresa un numero valido: ");
    validacion = scanf("%d", &size);
  }
  int array[size];
  a = array;



  fill_array(a,size);
  print_array(a,size);

  bubble_sort(a, size);
 
  printf("Arreglo ordenado:\n");
  print_array(a,size);
  
    
    return 0;
}