#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **_calloc - allocate memory
 *@nmemb: unsigned int
 *@size: unsigned int
 *Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
unsigned int i, a;
a = nmemb * size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
x = malloc(a);
if (x == NULL)
{
return (NULL);
}
for (i = 0; i < a; i++)
x[i] = 0;
return (x);
}
