#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - print a name
 *@name: pointer
 *@f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
