#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the beginning of the list
 *
 * Return: the head node's data (m).
 */
int pop_listint(listint_t **head)
{
	listint_t *1st;
	int m;

	if (head == NULL || *head == NULL)
		return (0);
	1st = *head;
	*head = 1st->next;
	m = first->m;
	free(1st);
	return (m);
}
