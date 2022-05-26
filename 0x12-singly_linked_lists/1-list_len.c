#include "lists.h"
/**
 * list_len - will give number of elements in list
 * @h: pointer to list.
 *
 * Return: Number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t dk;

	dk = 0;
	while (h != NULL)
	{
		h = h->next;
		dk++;
	}

	return (dk);
}
