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
int i, mul;
mul = 1;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
mul = mul * (atoi(argv[i]));
}
printf("%d\n", mul);
}
else
printf("Error\n");
return (1);
}
