#include <stdio.h>
/*size of */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned char)sizeof(char));
printf("Size of a int: %lu byte(s)\n", (unsigned int)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
