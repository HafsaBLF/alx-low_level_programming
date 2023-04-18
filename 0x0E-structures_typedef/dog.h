#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type
 *@name: pointer
 *@owner: pointer
 *@age: nbr
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
