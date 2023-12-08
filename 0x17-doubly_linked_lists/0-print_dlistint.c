#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c_ountr;

	c_ountr = 0;

	if (h == NULL)
		return (c_ountr);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c_ountr++;
		h = h->next;
	}

	return (c_ountr);
}
