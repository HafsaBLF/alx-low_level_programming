#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@n: const
 *@separator: pointer
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string;
unsigned int i;
char *x;

va_start(string, n);
for (i = 0; i < n; i++)
{
x = va_arg(string, char *);
if (x == NULL)
	printf("(nil)");
else
	printf("%s", x);
if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(string);
}
