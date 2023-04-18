#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - initialize a variable
 *@d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nail)\n");
	if (d->age == '\0')
		printf("Age: (nail)\n");
	if (d->owner == NULL)
		printf("Owner: (nail)\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
