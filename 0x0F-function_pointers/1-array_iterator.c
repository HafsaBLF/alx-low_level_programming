#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - execute a function
 *@array: pointer
 *@action: pointer
 *@size: size of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
	action(array[i]);
}
