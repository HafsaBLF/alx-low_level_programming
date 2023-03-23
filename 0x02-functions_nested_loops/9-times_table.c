#include <stdio.h>
#include "main.h"
/**
 * times_table - check the code.
 * Description
 * Return: Always 0.
 */
void times_table(void)
{
int a, x, y;
for (x = 0; x <= 9; x++)
{
for (a = 0; a <= 9; a++)
{
y = a * x;
if (y > 9)
{
_putchar((y / 10) + '0');
_putchar(y % 10 + '0');
}
else
{
if (y != 0)
{
_putchar(' ');
}
_putchar(y + '0');
}
if (a < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
