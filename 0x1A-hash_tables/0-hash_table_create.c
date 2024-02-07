#include "hash_tables.h"

/**
 * hash_table_create - func
 * @size: size
 *
 * Return: a val
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		return (NULL);
	}
	new_hash->size = size;
	new_hash->array = malloc(size * sizeof(hash_node_t *));

	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_hash->array[i] = NULL;
	}

	return (new_hash);

}
