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
int i;
for (i = 0; n > 0; i++, n--)
{
	s[i] = b;
}
return (s);
}
