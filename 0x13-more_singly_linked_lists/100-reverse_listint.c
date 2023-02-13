#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 *
 * @head: a pointer to the address of the head of a list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	/* if head is NULL, or the head's next is Null */
	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL; /* set the behind pointer to NULL */

	/* while the head's next is not NULL */
	while ((*head)->next != NULL)
	{
		ahead = (*head)->next; /* set the head's next to the behind pointer */
		(*head)->next = behind;
		behind = *head; /* set the behind pointer to the head */
		*head = ahead; /* set the head to the ahead pointer */
	}

	(*head)->next = behind; /* set the head's next to the behind pointer */

	return (*head); /* return the head */
}
