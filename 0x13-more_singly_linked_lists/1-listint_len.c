#include "lists.h"

/**
 * istint_len - returns the number of elements in a linked listint_t list.
 * @h: next element in list
 *
 * Return: number of elments
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while(h != NULL)
	{
		h = h->next;
		length++;
	}
return (length);
}
