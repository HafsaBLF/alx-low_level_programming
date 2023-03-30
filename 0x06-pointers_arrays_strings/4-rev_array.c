#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse the content of an array of integers
 * @a: the pointer
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
int x, y, z;
for (x = 0, y = (n - 1); x < y; x++, y--)
{
z = a[x];
a[x] = a[y];
a[y] = z;
}
}
