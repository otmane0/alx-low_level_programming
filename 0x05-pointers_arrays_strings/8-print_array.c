#include <stdlib.h>
#include "main.h"

/**
 * print_array - array of n
 * @a: array
 * @n: size
 */
void print_array(int *a, int n)
{
	int lop;

	for (lop = 0; lop < n; lop++)
	{
		printf("%d", a[lop]);
		if (lop != n - 1)
			printf(", ");
	}
	printf("\n");
}