#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: list pointer
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *a;

	while (*head)
	{
		a = *head;
		*head = (*head)->next;
		free(a);

	}
	*head = NULL;
}
