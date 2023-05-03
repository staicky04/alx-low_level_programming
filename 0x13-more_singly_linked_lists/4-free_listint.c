#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to head.
 * Return: None.
 */

void free_listint(listint_t *head)
{
	listint_t *new = head;
	listint_t *temp;

	while (new != NULL)
	{
		temp = h;
		new = new->next;
		free(temp);
	}
}
