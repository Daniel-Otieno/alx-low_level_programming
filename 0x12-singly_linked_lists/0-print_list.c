#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list
 * print [0] (nil) is str is NULL
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		if (list->str == NULL)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", list->len, list->str);
		list = list->next;
		n++;
	}

	return (n);
}
