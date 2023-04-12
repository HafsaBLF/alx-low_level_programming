#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * **alloc_grid - 2 dim
 * @width: width
 * @height: height
 * Return: dim
 */
int **alloc_grid(int width, int height)
{
int i, x;
int **a;
if (width <= 0 || height <= 0)
{
return (NULL);
}
a = malloc(sizeof(int *) * height);
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
a[i] = (int *) malloc(sizeof(int) * width);
if (a[i] == NULL)
{
for (x = 0; x <= i; x++)
{
free(a[x]);
}
free(a);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (x = 0; x < width; x++)
{
a[i][x] = 0;
}
}
return (a);
}
