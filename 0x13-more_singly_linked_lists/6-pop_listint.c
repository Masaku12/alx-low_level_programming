#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 *
 * @head: A pointer to the address of a list
 *
 * Return: 0 if the linked list is empty, otherwise the head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int headNodeData;

	if (*head == NULL) /* if the head pointer is NULL */
		return (0); /* return 0 */

	tmp = *head; /* set the tmp pointer to the head pointer */
	headNodeData = (*head)->n; /* store the value of the head node */
				      /* in a variable */
	*head = (*head)->next; /* set the head pointer to the next node */
				  /* in the list */

	free(tmp); /* free the temporary pointer */

	return (headNodeData); /* return the value of the head node */
}
