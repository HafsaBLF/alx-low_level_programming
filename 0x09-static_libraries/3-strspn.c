#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_strspn - get the length of a prefix substring.
 *@s: pointer
 *@accept: pointer
 *Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
{
return (i);
}
}
}
return (i);
}
