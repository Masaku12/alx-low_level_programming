#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the list
 *
 * @index: The index of the node being deleted
 *
 * Return: 1 on success, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL) /* if list is empty */
		return (-1);

	if (index == 0) /* if index is 0 */
	{
		*head = (*head)->next; /* set head to the next node */
		free(copy); /* free the old head */
		return (1);
	}

	/* iterates through the list until the node before index is found */

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next; /* set the next node to the next node after index */
	copy->next = tmp->next;
	free(tmp); /* free the node at index */
	return (1);
}
