#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **malloc_checked - allocate memory
 *@b: unsigned int
 *Return: nothing
 */
void *malloc_checked(unsigned int b)
{
void *x;
x = malloc(b);
if (x == NULL)
exit(98);
return (x);
}
