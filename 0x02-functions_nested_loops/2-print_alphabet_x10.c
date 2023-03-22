#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
char x, a;
for (a = 0; a < 10; a++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
