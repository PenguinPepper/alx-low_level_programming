#include "lists.h"

/**
 * insert_nodeint_at_index - function that
 * inserts a new node at a given position
 * @head: pointer to list
 * @idx: is the index of the list where the new node should be added
 * @n: integer to be added at list
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nowItem;
	listint_t *newItem;

	if (head == NULL)
		return (0);
	newItem = malloc(sizeof(listint_t));
	if (!newItem)
		return (0);
	newItem->next = NULL;
	newItem->n = n;
	if (idx == 0)
	{
		newItem->next = *head;
		(*head) = newItem;
		return (newItem);
	}
	nowItem = *head;
	while (idx != 1)
	{
		nowItem = nowItem->next;
		--idx;
		if (nowItem == NULL)
		{
			free(newItem);
			return (NULL);
		}
	}
	newItem->next = nowItem->next;
	nowItem->next = newItem;
	return (newItem);
}
