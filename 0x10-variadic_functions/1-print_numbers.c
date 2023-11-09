#include "variadic_functions.h"

/**
 * print_numbers - function.
 * @separator: array.
 * @n: number.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{


unsigned int i;

	if (n <= 0)
	{
		return (0);
	}

if (separator == NULL)
{

}
else
{
va_list ptr;
va_start(ptr, n);

for (i = 0; i < n ; i++)
{
	printf("%d", va_arg(ptr, int));

	if (i < n - 1)
	{
	printf("%s", separator);

	}

}
printf("\n");
va_end(ptr);
}
}
