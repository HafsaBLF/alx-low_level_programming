#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 **_strpbr - search a string for any of a set of bytes.
 *@s: pointer
 *@accept: pointer
 *Return: 0 if true
 */
char *_strpbr(char *s, char *accept)
{
int i, j;
char *x;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
x = &s[i];
return (x);
}
j++;
}
i++;
}
return (0);
}
