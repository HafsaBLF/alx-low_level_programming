#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c[] = "_putchar";
int x;
for (x = 0 ; c[x] != '\0'; )
{
_putchar(c[x]);
}
_putchar('\n');
return (0);
}
