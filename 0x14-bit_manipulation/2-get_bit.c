#include "main.h"
/**
 *get_bit - print the value of bit
 *@n: int
 *@index: int
 *Return: Value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
	return (-1);
return (n >> index & 1);
}
