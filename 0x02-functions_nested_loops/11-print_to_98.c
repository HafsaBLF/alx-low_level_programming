#include <stdio.h>
#include "main.h"
/*
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Description of parameter x
 */
void print_to_98(int n)
{
int i; 
for (n = 0; n <= 98; n++)
{
_putchar(n + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
for (n = 0; n >= 98; i--)
{
_putchar(n + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
