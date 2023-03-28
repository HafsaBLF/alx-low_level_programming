#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints a string
 * @str: string to print
 */
void puts_half(char *str)
{
int n, length = strlen(str);
for (n = ((length - 1) / 2) + 1; n < length; n++)
_putchar(*(str + n));
_putchar('\n');
}
