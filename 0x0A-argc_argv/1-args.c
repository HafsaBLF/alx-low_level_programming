#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the nbr of arguments passed into it
 * @argc: int
 * @argv: pointer
 *
 * Return: 0 if true
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
