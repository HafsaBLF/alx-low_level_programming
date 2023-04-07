#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 * @dest: pointer
 * @src: pointer
 * Return: 1 if true and 0 if false
 */
char *_strcat(char *dest, char *src)
{
int a, b;
a = 0;
while (dest[a])
	a++;
for (b = 0; src[b]; b++)
dest[a++] = src[b];
return (dest);
}
