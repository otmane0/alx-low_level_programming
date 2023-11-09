#include "variadic_functions.h"

/**
 * sum_them_all - a function.
 * @n: is a int.
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list ptr;
		va_start (ptr, n);

	for (i = 0; i < n; i++)
	{
		va_arg(ptr, int);
		sum = sum + ptr;
	}
	return (sum);
	}


}
