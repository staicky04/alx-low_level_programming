#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to a pointer to the head of the listint_t list.
 * Return: The data (n) of the head node that was deleted.
 *         If the list is empty, returns 0.
 */

int pop_listint(listint_t **head)
{
	int temp;
	listint_t *del;

	if (*head == NULL)
		return (0);

	del = *head;

	temp = (*head)->n;

	*head = (*head)->next;

	free(del);

	return (temp);
}
