#include "variadic_functions.h"

/**
 * sum_them_all - a function.
 * @n: is a int.
 * Return: 0 if n == 0.
*/

int sum_them_all(const unsigned int n, ...)
{

	if (n == 0)
	{
		return (0);
	}
	else


	{
		unsigned int sum = 0, i = 0;

		va_list ptr;

		va_start(ptr, n);

	for (i = 0; i < n; i++)
	{

		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
	}

}
