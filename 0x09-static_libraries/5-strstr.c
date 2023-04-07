#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 **_strstr - locate a substring.
 *@haystack: pointer
 *@needle: pointer
 *Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
int i;
i = 0;
while (haystack[i] != '\0')
{
needle = &haystack[i];
return (needle);
}
i++;
return ('\0');
}
