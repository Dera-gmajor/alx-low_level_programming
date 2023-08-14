#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type
 * @d: dog to describe
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
