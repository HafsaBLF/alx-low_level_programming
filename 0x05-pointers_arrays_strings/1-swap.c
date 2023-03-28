#include <stdio.h>
#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *@a: value of an integer
 *@b: value of an integer
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
