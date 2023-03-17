#include <stdio.h>
/*size of */
int main(void)
{
printf("Size of a char: %d byte(s)\n", (unsigned char)sizeof(char));
printf("Size of a int: %d byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
