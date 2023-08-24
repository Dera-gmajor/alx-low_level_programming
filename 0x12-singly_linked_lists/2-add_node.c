#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: head of the linked list.
 * @str: string
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int m;

	for (m = 0; str[m]; m++)
		;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = m;
	n->next = *head;
	*head = n;

	return (*head);
}
