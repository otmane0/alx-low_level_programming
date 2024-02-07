#include "hash_tables.h"

/**
 *  hash_djb2 - func
 * @str: string
 *
 * Return: hash
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int haashh;
	int c;

	haashh = 5381;

	while (c = *str++)
	{
		haashh = ((haashh << 5) + haashh) + c;
	}

	return (haashh);
}
