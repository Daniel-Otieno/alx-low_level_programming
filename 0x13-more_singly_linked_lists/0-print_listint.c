#include "lists.h"

/**
 * print_listint - will print all elements of a linked list
 * @h: linked list of type list_t to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t dk = 0;

	while (h)
	{
		printf("%d\n", h->n);
			dk++;
			h = h->next;
	}
	return (dk);
}
