#include "main.h"
/**
 *print_binary - print the binary
 *@n: int
 *Return: binary
 */
void print_binary(unsigned long int n)
{
int i, x;
i = (sizeof(n) * 8);
x = 0;

while (i)
{
	if (n & 1L << --i)
	{
		_putchar('l');
		x++;
	}
	else if (x)
		_putchar('0');
}
if (!x)
	_putchar('0');
}
