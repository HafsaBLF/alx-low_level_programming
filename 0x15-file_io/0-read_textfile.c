#include "main.h"
/**
 *read_textfile - print to the POSIX
 *@filename: pointer
 *@letters: size_t
 *Return: Actual nbr
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *x;
ssize_t a, b, c;
a = open(filename, O_RDONLY);
if (a == -1)
	return (0);
x = malloc(sizeof(char) * letters);
b = read(a, x, letters);
c = write(STDOUT_FILENO, x, b);
free(x);
close(a);
return (c);
}
