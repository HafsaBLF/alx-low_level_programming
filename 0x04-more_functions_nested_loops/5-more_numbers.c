#include <stdio.h>
#include "main.h"
/**
 *more_numbers - print 10 times the numbers
 * from 0 to 14, followed by a new line
 */
void more_numbers(void)
{
char n;
int i = 0;
int j = 0;
while (i < 10)
{
n = '0';
for (j = 0; j <= 14; j++)
{
if (j > 9)
_putchar('1');
if (n == 58)
n = '0';
_putchar(n);
n++;
}
i++;
_putchar('\n');
}
}
