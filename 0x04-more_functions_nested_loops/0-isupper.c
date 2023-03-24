#include <stdio.h>
#include "main.h"
/*
 * _isupper - check for uppercase character
 *@c is the int to be checked
 *Return: 1 if char is upper, otherwise 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
