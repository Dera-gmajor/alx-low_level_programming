#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b = *head;
	unsigned int c = 0;

	if (b == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(b);
		return (1);
	}
	while (c < (index - 1))
	{
		if (b->next == NULL)
			return (-1);
		b = b->next;
		c++;
	}
	a = b->next;
	b->next = a->next;
	free(a);
	return (1);
}
