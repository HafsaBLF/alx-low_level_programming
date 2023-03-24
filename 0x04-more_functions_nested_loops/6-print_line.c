#include <stdio.h>
#include "main.h"
/**
 *print_line - draw a straight line in the terminal
 *@n: the int checker
 */
void print_line(int n)
{
int i = 0;
while (n > i)
{
_putchar('_');
i++;
}
_putchar('\n');
}
