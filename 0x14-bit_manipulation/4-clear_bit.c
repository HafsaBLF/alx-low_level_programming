#include "main.h"
/**
 *clear_bit - set the value of bit
 *@n: int
 *@index: int
 *Return: Value of bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
	return (-1);
if (*n & 1L << index)
	*n ^= 1L << index;
return (1);
}
