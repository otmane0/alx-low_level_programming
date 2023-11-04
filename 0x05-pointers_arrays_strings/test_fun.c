#include <stdlib.h>
#include "main.h"

void print_array(int *a, int n)

{
int lop;
for (lop = 0 ; lop < n; lop++)
{
	printf("%d", a[lop]);
	if (lop != n - 1)
		printf(", ");
}
	printf("\n");
}

int main()
{

int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);

}