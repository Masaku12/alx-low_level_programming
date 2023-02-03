#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: a pointer to a list
 *
 * Return: number of elements in @listint_t list
 */

size_t listint_len(const listint_t *h)
{
	/* initialize a variable called nodes to 0 */
	size_t nodes = 0;

	while (h != NULL) /* While the head of the list is not NULL */
	{
		nodes++; /* increment the number of nodes */
		h = h->next; /* Set the head to the next node */
	}

	return (nodes); /* Return the number if elements */
}
