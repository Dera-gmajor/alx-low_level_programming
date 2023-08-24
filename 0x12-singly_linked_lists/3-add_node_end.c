#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head of the linked list.
 * @str: string to store new node
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *a = *head;
	unsigned int c = 0;

	for (c = 0; str[c]; c++)
		;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = c;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (a->next)
		a = a->next;
	a->next = n;
	return (n);
}
