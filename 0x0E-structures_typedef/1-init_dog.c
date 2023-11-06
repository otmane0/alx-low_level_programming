#include "dog.h"

/**
 * init_dog - function for type
 * @d: type of code.
 * @name: the name of the dog
 * @age: the age.
 * @owner: the owner.
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
