#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - return the natural square root of a number.
 * @n: number
 *return: the resulting square root of a number
 */
int _sqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}
else if ((i * i) == n)
{
return (i);
}
else
return (_sqrt(n, i + 1));
}
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}
