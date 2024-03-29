#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *copy = h;
	size_t i;

	for (i = 0; copy; i++, copy = copy->next)
		printf("%d\n", copy->n);
	return (i);
}
