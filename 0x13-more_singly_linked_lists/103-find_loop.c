#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *toise, *rat;

	toise = head;
	rat = head;
	while (toise && rat && rat->next)
	{
		toise = toise->next;
		rat = rat->next->next;
		if (toise == rat)
		{
			toise = head;
			break;
		}
	}
	if (!toise || !rat || !rat->next)
		return (NULL);
	while (toise != rat)
	{
		toise = toise->next;
		rat = rat->next;
	}
	return (rat);
}
