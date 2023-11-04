#include <stdio.h>

int main ()

{
	int num = 5 ;
	int *ptr;

	ptr = &num;
	printf ("%p\n" , &num);

	printf ("%d\n" , *ptr);

*ptr = 327;

	printf ("%d\n" , num);
	printf ("%p\n" , &num);

	return 0;
}