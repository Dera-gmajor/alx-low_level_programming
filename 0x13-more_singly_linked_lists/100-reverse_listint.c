#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = NULL;
	b = NULL;

	for (; *head != NULL; *head = b)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
	}
	*head = a;
	return (*head);
}
