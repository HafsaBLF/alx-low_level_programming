#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the name of a prg
 * @argc: int
 * @argv: pointer
 *
 * Return: 0 if true
 */
int main(int argc, char *argv[])
{
if (argc >= 0)
printf("%s\n", argv[0]);
return (0);
}
