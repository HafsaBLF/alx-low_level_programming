#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **array_range - create an array of integers
 *@min: int
 *@max: int
 *Return: nothing
 */
int *array_range(int min, int max)
{
int *x, i, y;
y = min;
i = 0;
if (min > max)
{
return (0);
}
x = malloc((max - min + 1) * sizeof(int));
if (!x)
{
return (0);
}
while (i <= (max - min))
x[i++] = y++;
return (x);
}
