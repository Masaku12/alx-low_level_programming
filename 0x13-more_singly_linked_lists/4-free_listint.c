#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: A pointer to the head of the list being freed
 */

void free_listint(listint_t *head)
{
	/* create a tmp pointer to a listint_t */
	listint_t *tmp;

	while (head) /* while the head is not NULL */
	{
		tmp = head->next; /* set the tmp pointer to the head */
				     /* pointer's next pointer */
		free(head); /* free the head pointer */
		head = tmp; /* set the head pointer to the tmp pointer */
	}
}
