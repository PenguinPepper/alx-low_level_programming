#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head
 * @n: new integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newItem = malloc(sizeof(listint_t));

	if (head == NULL || newItem == NULL)
		return (NULL);
	newItem->n = n;
	newItem->next = NULL;
	if (*head)
		newItem->next = *head;
	*head = newItem;
	return (newItem);
}
