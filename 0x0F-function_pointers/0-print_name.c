#include "function_pointers.h"

/**
 * print_name - a function that print a name.
 * @name: the name.
 * @f: a pointer.
 * @*: a return.
*/

void print_name(char *name, void (*f)(char *))
{

	void (*f)(char *) = &name;
	int i;

	for (i = 0; name[i] != '\0'; i++)
	putchar(name[0]);
}
