#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function for type
 * @d: type of code.
 * @name: the name of the dog
 * @age: the age.
 * @owner: the owner.
*/


void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");


}
}
