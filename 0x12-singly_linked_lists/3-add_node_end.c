#include "lists.h"

/**
 * add_node_end - add a tail node
 * @head: the head node
 * @str: string added
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node, *n;

	while (str[i])
		i++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		n = *head;
		while (n->next != NULL)
			n = n->next;
		n->next = new_node;
		return (new_node);
	}
}
