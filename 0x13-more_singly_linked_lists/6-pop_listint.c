#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int b;

	if (head == NULL || *head == NULL)
		return (0);
	b = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;

	return (b);
}
