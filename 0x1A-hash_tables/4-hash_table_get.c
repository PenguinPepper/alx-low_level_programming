#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the
 * element, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int hsh_index;

	if (ht == NULL || key == NULL || *key = '\0' )
		return (NULL);
	hsh_index = key((const unsigned char *)key, ht->size);
	if (hsh_index >= ht->size)
		return (NULL);
	new_node = ht->array[hsh_index];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = node->next;
	if (new_node == NULL)
		return (NULL);
	else
	{
		return (node->value);
	}
}
