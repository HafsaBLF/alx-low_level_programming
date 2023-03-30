#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: the pointer
 * @src: the pointer
 * @n: bytes
 * Return: 1 if true and 0 if false
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;
a = 0;
while (dest[a])
	a++;
for (b = 0; b < n && src[b] != '\0'; b++)
dest[a + b] = src[b];
dest[a + b] = '\0';
return (dest);
}
