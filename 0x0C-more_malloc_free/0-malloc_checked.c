#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Entry Point
 * @b: amount
 * Return: pointer to main func
 */
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);
}
