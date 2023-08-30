#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer
 * Return: sum of all the data, Otherwise If the list is empty
 */
int sum_listint(listint_t *head)
{
	int a = 0;

	for (; head; head = head->next)
	{
		a += head->n;
	}
	return (a);
}
