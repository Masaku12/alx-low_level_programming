#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a @listint_t list
 *
 * @h: A pointer to a list
 *
 * Return: the number of nodes
 */

/* Declare a function that takes a pointer to */
/* a listint_t as a parameter */
size_t print_listint(const listint_t *h)
{
	/* Declare a size_t variable called nodes and */
	   /* initialize it to 0 */
	size_t nodes = 0;

	while (h != NULL) /* While the pointer to listint_t is not NULL */
	{
		nodes++; /* increment the nodes variable */
		printf("%d\n", h->n); /* Print the value of the n member */
		h = h->next; /* set head to point to the next node */
	}

	return (nodes); /* Return the number of nodes */
}
