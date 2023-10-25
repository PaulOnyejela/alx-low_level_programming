#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first node in the list
 * @idx: index of the node to insert
 * @n: value for new node
 *
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *temp1, *temp2;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp1 = *head;
		for (k = 0; k < idx - 1 && current != NULL; k++)
		{
			temp1 = temp1->next;
		}
		if (temp1 == NULL)
			return (NULL);
	}
	temp2 = malloc(sizeof(listint_t));
	if (temp2 == NULL)
		return (NULL);
	temp2->n = n;
	if (idx == 0)
	{
		temp2->next = *head;
		*head = temp2;
		return (temp2);
	}
	temp2->next = temp1->next;
	temp1->next = temp2;
	return (temp2);
}
