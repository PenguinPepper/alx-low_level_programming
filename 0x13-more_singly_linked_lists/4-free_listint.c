#include "lists.h"

/**
 * ree_listint - function that frees a listint_t list
 * @head: pointer to start of list
 *
 * Return: if alll goes well 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
