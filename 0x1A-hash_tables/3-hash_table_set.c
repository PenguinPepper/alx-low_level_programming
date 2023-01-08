#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_2;
	hash_node_t *up_next;
	unsigned long int hsh_index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return 0;
	value_2 = strdup(value);
	if (value_2 == NULL)
		return 0;
	hsh_index = key_index((const unsigned char *)key, ht->size);
	for (i = hsh_index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_2;
			return 1;
		}

	}
	up_next =  malloc(sizeof(hash_node_t));
	if (up_next == NULL)
	{
		free(value_2);
		return 0;
	}
	up_next->key = strdup(key);
	if (up_next->key == NULL)
	{
		free(up_next);
		return 0;
	}
	up_next->value = value_2;
	up_next->next = ht->array[hsh_index];
	ht->array[hsh_index] = up_next;

	return 1;
}
