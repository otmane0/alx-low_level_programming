#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates a new struct dog .
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created struct dog.
 */

struct dog *new_dog(char *name, float age, char *owner)

{

	struct dog *new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
	return (NULL);
	}

		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;

	return (new_dog);
}
