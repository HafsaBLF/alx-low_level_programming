#include <stdio.h>
#include "main.h"
/**
 *print_line - draw a straight line in the terminal
 *@n: the int checker
 */
void print_line(int n)
{
char c;
c = 95;
if (n > 0)
{
_putchar(c);
}
else
_putchar('\n');
}
