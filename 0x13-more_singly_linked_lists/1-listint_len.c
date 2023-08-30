#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: list head
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t a;
	const listint_t *b;

	for (b = h, a = 0; b != NULL; b = b->next, a++)
	{
		/* Empty loop body */
	}
	return (a);
}
