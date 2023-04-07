#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncpy - copy a string
 * @dest: the pointer
 * @src: the pointer
 * @n: bytes
 * Return: 1 if true and 0 if false
 */
char *_strncpy(char *dest, char *src, int n)
{
int b;
for (b = 0; b < n && src[b] != '\0'; b++)
dest[b] = src[b];
while (b < n)
{
dest[b] = '\0';
b++;
}
return (dest);
}
