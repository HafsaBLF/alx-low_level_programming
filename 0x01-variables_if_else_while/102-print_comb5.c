#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, c, y, z, w, v, a, b;
for (x = 0; x <= 99; x++)
{
for (c = x + 1; c <= 99; c++)
{
v = c / 100;
y = (c % 10) % 10;
a = (v && y);
z = x / 10;
w = x % 10;
b = (z && w);
putchar(v + '0');
putchar(y + '0');
putchar(',');
if ((a != b)&&(a < b))
{
putchar(z + '0');
putchar(w + '0');
}
if (x != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
