#include "lists.h"

/**
* listint_len - returns the number of elements
* @h: head 
* Return: the number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t len_node = 0;

	while (h != NULL)
	{
		h = h->next;
		len_node++;
	}
	return (len_node);
}
