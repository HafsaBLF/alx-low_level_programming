#include <stdio.h>
#include "main.h"
/*
 *print_line - draw a straight line in the terminal
 */
void print_line(int n)
{
char c;
c = 95;
if (n > 0)
{
_putchar(c);
n++;
}
else
_putchar('\n');
}
