#include <stdio.h>
#include "main.h"
/*
 *_isdigit - check for a digit (0 through 9)
 *@c the int checker
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
