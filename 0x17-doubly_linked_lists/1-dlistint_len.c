#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c_ountr;

	c_ountr = 0;

	if (h == NULL)
		return (c_ountr);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c_ountr++;
		h = h->next;
	}

	return (c_ountr);
}
