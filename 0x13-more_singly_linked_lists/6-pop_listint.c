#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * 2head: ponter to list
 *
 * Return: if empty 0, else return node data n
 */
int pop_listint(listint_t **head)
{
	listint_t *nowItem;
	int left;

	if (!(*head) || !head)
		return (0);
	nowItem = *head;
	left = nowItem->n;
	*head = (*head)->next;
	free(nowItem);
	return (left);
}
