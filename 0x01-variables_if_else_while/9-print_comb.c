#include <stdio.h>
/**
 * main
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}
if (n == '9')
putchar('\n');
return (0);
}
