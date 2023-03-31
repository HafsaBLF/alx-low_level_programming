#include <stdio.h>
#include "main.h"
/**
 * leet - encode a string into 1337
 * @c: string
 * Return: string encoded
 */
char *leet(char *c)
{
char *ch = c;
long unsigned int i;
char alph[] = {'A', 'E', 'O', 'T', 'L'};
int val[] = {4, 3, 0, 7, 1};
while (*c)
{
for (i = 0; i < sizeof(alph) / sizeof(char); i++)
{
if (*c == alph[i] || *c == alph[i] + 32)
{
*c = 49 + val[i];
}
}
c++;
}
return (ch);
}
