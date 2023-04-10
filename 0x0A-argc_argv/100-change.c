#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - print the minimum number of coins
 *to make change for an amount of money
 *@argc: int
 *@argv: pointer
 *
 * Return: minimum nmbr
 */
int main(int argc, char *argv[])
{
int coins[] = {25, 10, 5, 2, 1};
int cents, change, i, res;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	if (argc == 2)
	{
	i = res = change = 0;
	while (coins[i] != '\0')
	{
		if (cents >= coins[i])
		{
		res = cents / coins[i];
		change += res;
		cents -= res * coins[i];
		}
	i++;
	}
	printf("%d\n", change);
	}
	return (0);
}
