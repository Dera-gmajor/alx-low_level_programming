#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node
 * @n: number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);
	a->n = n;
	a->next = *head;
	*head = a;

	return (a);
}
