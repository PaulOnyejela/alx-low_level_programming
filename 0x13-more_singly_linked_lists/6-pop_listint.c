#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int my_dt;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	my_dt = temp->n;
	free(temp);
	return (my_dt);
}
