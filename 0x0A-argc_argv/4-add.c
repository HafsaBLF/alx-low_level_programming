#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - add positive nbr
 * @argc: int
 * @argv: pointer
 *
 * Return: 1
 */
int main(int argc, char *argv[])
{
int add, i, c;
add = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
c = *argv[i];
if (c >= 'a' && c <= 'z')
{
printf("Error\n");
return (1);
}
add += atoi(argv[i]);
}
printf("%d\n", add);
}
else
printf("0\n");
return (0);
}
