#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->nxt == NULL)
		return (*head);
	previous = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = previous;
		previous = *head;
		*head = nxt;
	}
	*head = previous;
	return (*head);
}
