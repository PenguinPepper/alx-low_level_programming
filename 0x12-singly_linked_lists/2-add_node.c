#include "list.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to linked list
 * @str: new string to be added
 *
 * Return: he address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	unsigned int len = 0;

	while (str[len])
		len++;

	first = malloc(sizeof(list_t));
	if (!first)
		return (NULL);

	first->length = len;
	first->str = strdup(str);
	first->next = (*head);
	(*head) = first;
	return (*head);

}
