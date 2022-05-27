#include "lists.h"

/**
 * listint_len - will return no of elemnts in a linked list
 * @h:linked listtobe traversed
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t dk;

dk = 0;

while (h)
{
dk++;
h = h->next;
}

return (dk);

}
