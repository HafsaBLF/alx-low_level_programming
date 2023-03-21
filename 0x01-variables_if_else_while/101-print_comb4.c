#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y, z, w, v;
for (x = 0; x < 900; x++)
{
y = x / 100;
z = (x / 10) % 10;
w = x % 10;
if (((y != z) != w)&&(y < z)&&(z < w))
{
putchar(y + '0');
putchar(z + '0');
putchar(w + '0');
if (x != 789)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
