#include <stdio.h>
#include "main.h"

int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if((a % 3) = 0)
{
printf("Fizz\n");
}
if ((a % 5) = 0)
{
printf("Buzz\n");
}
if (((a % 3) = 0) && ((a % 5) = 0))
{
	printf("FizzBuzz\n");
}
else
printf("%d",a);
_putchar('\n');
}
}
