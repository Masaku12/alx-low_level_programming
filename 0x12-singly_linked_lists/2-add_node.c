#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: A node being added to the list
 * @str: A string being added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new; /* Creates a new list */

	new = malloc(sizeof(size_t)); /* Allocate memory for the new node */

	if (new == NULL)
		return (NULL);

	if (str == NULL) /* If the string is NULL, set it to NULL */
		new->str = NULL;

	else /* Otherwise set the string to the string given as a parameter */
		new->str = strdup(str);

	new->len = 0; /* set the length of the string */

	while (new->str[new->len] && str)
		new->len++;

	new->next = (*head); /* set the next node to the current head */

	*head = new; /* set the head to the new node */
	return (*head);
}
