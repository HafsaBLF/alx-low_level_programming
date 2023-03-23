#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the code.
 * @n: Description of parameter x
 * Return: with new line
 */
void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
for (n = 0; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
