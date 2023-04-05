#include <stdio.h>
#include "main.h"
/**
 * factorial - return the factorial of a given number
 * @n: number
 * If n is lower than 0, the function should return -1
 * Factorial of 0 is 1
 * return: factorial of a number
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
