#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: the pointer
 * @s2: the pointer
 * return: the result to a
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;
while (*s1)
{
if (*s1 != *s2)
{
a = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (a);
}
