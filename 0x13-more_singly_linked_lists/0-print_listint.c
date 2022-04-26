#include "lists.h"

/**
 * print_listint - Function prints all elements of listint_t list
 * @h: points to start of list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		printf("%d\n", h->n);
	}

	return (i);
}
