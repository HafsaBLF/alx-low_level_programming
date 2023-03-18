#include <stdio.h>
/**
 * main
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = '0';
while (n < '9')
{
putchar(n);
putchar(',');
putchar(' ');
n++;
}
putchar('9');
putchar('\n');
return (0);
}
