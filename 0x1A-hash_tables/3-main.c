#include <string.h>
#include "hash_tables.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(102);
	hash_table_set(ht, "depravement", "serafins");
	return (EXIT_SUCCESS);
}
