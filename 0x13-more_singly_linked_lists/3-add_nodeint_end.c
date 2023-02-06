#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 *
 * @head: A pointer to the address of a list
 * @n: An integer for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t)); /* Allocate new memory for a new node */
	if (new == NULL) /* if the allocation fails */
		return (NULL); /* Return NULL */

	new->n = n; /* set the value of new node to the value passed in */
	new->next = NULL; /* set the next pointer of new node to NULL */

	if (*head == NULL) /* if the list is empty */
		*head = new; /* set the head pointer to the new node */

	else
		/* Otherwise set the next pointer of the last node to */
		/* the new node */
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head); /* return the head pointer */
}
