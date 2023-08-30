#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: index of the listint_t list
 * @n: integer
 * Return: the address of the new node,
 * Otherwise - NULL, If the function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *a = *head;
	unsigned int d = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = a;
		*head = new;
		return (new);
	}
	while (d < (idx - 1))
	{
		if (a == NULL || a->next == NULL)
			return (NULL);
		a = a->next;
		d++;
	}
	new->next = a->next;
	a->next = new;

	return (new);
}
