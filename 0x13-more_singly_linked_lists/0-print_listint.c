#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listsint_t list
 * @h: new node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("\n%d", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
