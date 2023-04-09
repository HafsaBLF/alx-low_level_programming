#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiply 2 nbr
 * @argc: int
 * @argv: pointer
 *
 * Return: 1
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc > 1)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a*(b));
return (0);
}
else
printf("Error\n");
return (1);
}
