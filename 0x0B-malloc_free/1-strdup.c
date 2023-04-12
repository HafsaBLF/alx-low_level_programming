#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * char *_strdup - return  a pointer to
 * a newly allocated space
 * @str: pointer
 * Return: 0 if false
 */
char *_strdup(char *str)
{
char *x;
int i, a;
i = a = 0;
while (str[i] != '\0')
i++;
x = malloc(sizeof(char) * (i + 1));
if (x == NULL || str == NULL)
{
return (NULL);
}
for (a = 0; a < i; a++)
{
x[a] = str[a];
}
return (x);
}
