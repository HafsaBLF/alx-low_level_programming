#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int
 * @c: char
 *
 *return: pointer, NULL if size = 0 or false
 */
char *create_array(unsigned int size, char c)
{
char *x;
unsigned int i;
x = malloc(sizeof(char) * size);
if (size == 0 || x == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
x[i] = c;
}
return (x);
}
