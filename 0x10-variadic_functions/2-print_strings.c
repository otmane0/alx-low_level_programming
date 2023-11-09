#include "variadic_functions.h"

/**
 * print_strings - function.
 * @separator: array.
 * @n: number.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (n < 0)
	{
		return;
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
	char *str = va_arg(ptr, char *);

	if (str == NULL)
	{
		printf("(nill)");
	}

	else
	{
		printf("%s", str);

	if (i < n - 1)
	{
		printf("%s", separator);
	}
	}
}
printf("\n");
va_end(ptr);
}

}
