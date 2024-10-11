#include "hash_tables.h"

/**
 *  hash_table_get - func
 * @key: string
 * @ht: size
 *
 * Return: hash
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || strlen(key) == 0 ||
	 ht->array == NULL || ht->size == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);


