#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *print_diagsums - print the sum of the two diagonals
 *of a square matrix of integers.
 *@a: pointer
 *@size: int
 */
void print_diagsums(int *a, int size)
{
int i, x1, x2;
x1 = 0;
x2 = 0;
for (i = 0; i < size; i++)
{
x1 += a[i];
x2 += a[size - i - 1];
a += size;
}
printf("%d, ", x1);
printf("%d\n", x2);
}
