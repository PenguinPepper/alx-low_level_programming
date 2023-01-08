#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i = 0;

	if (size > 0)
	{
		table = malloc(sizeof(hash_table_t));
		if (table == NULL)
			return (NULL);
		table->array = malloc(sizeof(hash_table_t) * size);
		if (table->array == NULL)
		{
			free(table);
			return (NULL);
		}
		table->size = size;
		while (i < size)
		{
			table->array[i] = NULL;
			i++;
		}
		return (table);
	}
	return (NULL);
}
