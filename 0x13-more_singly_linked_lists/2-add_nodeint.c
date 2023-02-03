#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: A pointer to the address of the @listint_t
 * @n: A constant integer held by the new node
 *
 * Return: NULL, if the function fails, otherwise address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t)); /* Allocate memory for a new node */
	if (new == NULL) /* if the allocation fails */
		return (NULL); /* Return NULL */

	new->n = n; /*Assign the value of to the new node's n member */
	new->next = *head; /* Assign the value of head to the new */
			      /* node's next member */

	*head = new; /* Assign the address of the new node to head */

	return (new);
}
