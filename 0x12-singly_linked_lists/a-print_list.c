
#include "struct.h"


size_t print_list(const list_t *h)
{
	int i = 0, j = 0;
	if (h == NULL)
	printf("[0] (nil)\n");
	else
	while (h != NULL)
	{
		for (i; h->str[i] != '\0'; i++)
		{

		}

		h = h->next;
		j++;
	}
	return (j);
}