#include "lists.h"

/**
 * sum_listint - Function returns sum of all data (n)
 * of a listint_t linked list
 * @head: points to list
 *
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

