#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
