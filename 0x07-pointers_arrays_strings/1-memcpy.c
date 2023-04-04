#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 **_memcpy - copy memory area.
 *@dest: pointer
 *@src: char
 *@n: unsigned int
 *Return: to pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; n > 0; i++, n--)
{
dest[i] = src[i];
}
return (dest);
}
