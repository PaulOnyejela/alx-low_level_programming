#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tempa, *tempb;

	tempa = malloc(sizeof(listint_t));
	if (tempa == NULL)
		return (NULL);

	tempa->n = n;
	tempa->next = NULL;

	if (*head == NULL)
	{
		*head = tempa;
		return (tempa);
	}

	tempb = *head;
	while (tempb->next)
		tempb = tempb->next;
	tempb->next = tempa;
	return (tempa);
}
