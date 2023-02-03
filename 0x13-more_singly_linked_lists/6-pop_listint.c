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

	if (*head == NULL)
		return (0);

	tmp = *head;
	headNodeData = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (headNodeData);
}
