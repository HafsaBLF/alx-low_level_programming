#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 **_strchr - locate a character in a string.
 *@s: pointer
 *@c: char
 *Return: 0 if true 1 if false
 */
char *_strchr(char *s, char c)
{
int n;
for (n = 0; n < c; n++)
{
if (s[n] == c)
{
return (s + n);
}
}
return (NULL);
}
