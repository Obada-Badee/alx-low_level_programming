#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - print a number
 *@array: pointer to array
 *@size: size of array
 *@action: pointwer to function that returns nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
  unsigned int i;

  for (i = 0; i < size; i++)
    action(array[i]);
}
