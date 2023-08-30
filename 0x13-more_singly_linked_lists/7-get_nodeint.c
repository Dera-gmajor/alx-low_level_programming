#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: index of the node
 * Return: return NULL if the node does not exist
 * or pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t a = 0;

	while (a < index && head->next)
	{
		head = head->next;
		a++;
	}
	if (a >= index)
		return (NULL);
	return (head);
}
