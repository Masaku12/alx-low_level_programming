#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n) of a list
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: 0, if the list is empty otherwise, the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
