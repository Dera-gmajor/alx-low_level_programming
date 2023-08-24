#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *f;

	while (head)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
