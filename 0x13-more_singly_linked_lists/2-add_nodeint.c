#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: the poinetr to the first node in the list
 * @n: data to insert in new node
 *
 * Return: pointer to new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
