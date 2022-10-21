#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
 #include <string.h>

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
	unsigned int count = 0;

	while (str[len])
		len++;

	list_t *first = malloc(sizeof(list_t));

	if (!first)
		return (NULL);

	first->str = strdup(str);
	first->len = count;
	first->next = (*head);
	(*head) = first;
	return (*head);

}
