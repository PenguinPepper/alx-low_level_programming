#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to list
 * @index: index of the node, starting at 0
 *
 * Return: if the node does not exist then Null, else return node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nowItem;
	size_t num = 0;

	nowItem = head;
	while (nowItem)
	{
		if (num == index)
			return (nowItem);
		num++;
		nowItem = nowItem->next;
	}
	return (nowItem);
}
