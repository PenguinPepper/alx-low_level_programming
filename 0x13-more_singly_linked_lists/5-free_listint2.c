#include "lists.h"

/**
 * free_listint2 - function that frees a
 * listint_t list and sets the head to NULL
 * @head: pointer to list
 *
 * Return: if all goes well 0
 */
void free_listint2(listint_t **head)
{
	listint_t *nowItem;
	listint_t *tmp;

	if (!head)
		return;
	nowItem = *head;
	while (nowItem)
	{
		tmp = nowItem;
		nowItem = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}
