#include "lists.h"
/**
 * list_len - displays number of elements in a list
 * @h: singly linked list.
 * Return: number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t print = 0;

	for (; h; h = h->next)
	{
		print++;
	}
	return (print);
}
