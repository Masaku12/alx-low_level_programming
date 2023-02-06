#include "lists.h"

/**
 * free_listint2 - Frees a list
 *
 * @head: A pointer to the address of a list
 *
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	/* declare a tmp pointer */
	listint_t *tmp;

	if (head == NULL) /* if the head pointer is not NULL */
		return;

	while (*head) /* while the head pointer is not NULL */
	{
		tmp = (*head)->next; /* set the tmp pointer to */
					/* the next node */
		free(*head); /* free the current node */
		*head = tmp; /* set the head pointer to the next node */
	}

	head = NULL; /* set the head pointer to NULL */
}
