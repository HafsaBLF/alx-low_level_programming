#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - print nbr
 *@n: const
 *@separator: pointer
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list op;
unsigned int i;
int x;
x = 0;
	va_start(op, n);
	if (separator == NULL)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		x = va_arg(op, int);
	printf("%d", x);
	if (i != (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(op);
}
