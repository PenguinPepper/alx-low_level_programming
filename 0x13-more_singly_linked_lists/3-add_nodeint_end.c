#include "lists.h"

/**
 * add_nodeint_end -  function that adds a
 * new node at the end of a listint_t list
 * @head: poineter to start
 * @n: integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newItem = malloc(sizeof(listint_t));
	listint_t *nowItem;

	if (head == NULL || newItem == NULL)
		return (NULL);
	newItem->n = n;
	newItem->next = NULL;
	if (!*head)
		*head = newItem;
	else
	{
		nowItem = *head;
		while (nowItem->next)
			nowItem = nowItem->next;
		nowItem->next = newItem;
	}
	return (newItem);
}
