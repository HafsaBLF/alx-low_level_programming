#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print all arguments it receives.
 * @argc: int
 * @argv: pointer
 *
 * Return: 0 if true
 */
int main(int argc, char *argv[])
{
int i;
i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
