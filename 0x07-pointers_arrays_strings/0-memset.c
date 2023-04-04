#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 **_memset - fill memory with a constant byte.
 *@s: pointer
 *@b: char
 *@n: unsigned int
 *Return: to pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
for (n = 0; n < 98; n++)
{
	s[n] = b;
}
return (s);
}
