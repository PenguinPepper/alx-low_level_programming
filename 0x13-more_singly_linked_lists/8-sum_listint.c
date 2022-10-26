#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to list
 *
 * Return: if list is empty 0, else return sum
 */
int sum_listint(listint_t *head)
{
	listint_t *nowItem;
	size_t sum = 0;

	if (!head)
		return (0);
	nowItem = head;
	while (nowItem)
	{
		sum += nowItem->n;
		nowItem = nowItem->next;
	}
	return (sum);
}
