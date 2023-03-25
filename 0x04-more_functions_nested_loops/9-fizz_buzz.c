#include <stdio.h>
/**
 * main - print the numbers from 1 to 100 followed by a new line
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 3) == 0)
{
printf("Fizz ");
}
if ((a % 5) == 0)
{
printf("Buzz ");
}
if (((a % 3) == 0) && ((a % 5) == 0))
{
printf("FizzBuzz ");
}
else if (((a % 3) != 0) && ((a % 5) != 0))
{
printf("%d ", a);
}}
printf("\n");
return (0);
}

