#include "list.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to next elements in list
 *
 * Description: If str is NULL, print [0] (nil)
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->length, h->str);

		h = h->next;
		size++;
	}
	return (size);
}
