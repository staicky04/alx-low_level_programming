#include "lists.h"

/**
* sum_listint - calculates sum of all data of a linked list
* @head: pointer to the head of the linked list
* Return: return sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
