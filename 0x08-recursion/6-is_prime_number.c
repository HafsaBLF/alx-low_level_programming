#include <stdio.h>
#include "main.h"
/**
 *is_prime_number - say if an integer is a prime number or not
 *@n: number
 * returns 1 if the input integer is a prime number, otherwise return 0
 */
int _prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
else
return (_prime(n, i - 1));
}
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_prime(n, n - 1));
}
