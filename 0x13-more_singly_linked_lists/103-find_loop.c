#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	if (head == NULL || head->next == NULL)
		return (NULL);
	a = head->next;
	b = (head->next)->next;

	for (; b != NULL;)
	{
		if (a == b)
		{
			a = head;
			for (; a != b;)
			{
				a = a->next;
				b = b->next;
			}
			return (a);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (NULL);
}
