#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y, z;
for (x = 0; x <= 100; x++)
{
y = ((x / 10) + '0');
z = ((x % 10) + '0');
if ((y != z)&&(z > y))
{
putchar(y);
putchar(z);
if (x != 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
