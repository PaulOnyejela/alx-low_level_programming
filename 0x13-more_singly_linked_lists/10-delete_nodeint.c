#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: pointer to the indexed node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *current, *nxt;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nxt = (*head)->nxt;
		free(*head);
		*head = nxt;
		return (1);
	}
	current = *head;
	for (k = 0; k < index - 1; k++)
	{
		if (current->nxt == NULL)
			return (-1);
		current = current->nxt;
	}
	nxt = current->nxt;
	current->nxt = nxt->nxt;
	free(nxt);
	return (1);
}
