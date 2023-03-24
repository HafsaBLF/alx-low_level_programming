#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - function that draws a diagonal line on the terminal
 *@n: the int checker
 */
void print_diagonal(int n)
{
int i = 0;
int f = 0;
while (n > i)
{
if (n > 0)
{
while (f <= i - 1)
{
_putchar(' ');
f++;
}
_putchar('\\');
_putchar('\n');
}
i++;
}
_putchar('\n');
}
