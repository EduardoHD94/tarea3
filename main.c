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
 /** @brief The main program that do the bubblesort
 * by EduardoHD
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
  //Apuntador al arreglo de enteros
  a = array;
  //Llenar el arreglo con validacion 
  fill_array(a,size);
  //Imprimir el arreglo como fue ingresado
  print_array(a,size);
  //Ordenar el arreglo
  bubble_sort(a, size);
  
  printf("Arreglo ordenado:\n");
  //Arreglo ordenado
  print_array(a,size);
  
    
    return 0;
}