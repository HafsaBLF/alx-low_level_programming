#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - print the sign of a nbr
 * @n: is the int to be checked
 * Return: 1 if int greater than zero, 0 if int is 0 else -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
_putchar('-');
return (-1);
}
