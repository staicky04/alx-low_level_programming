#include "lists.h"

/**
* print_listint - prints all the elements of a linked list
* @h: head of the list
* Return:the  number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{
		count++;
		printf("%d\n", new->n);
		new = new->next;
	}
	return (count);
}
