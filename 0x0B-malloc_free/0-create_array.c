#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that returns a reference of size and char
 * @size: size of array
 * @c: char
 * Return: pointer to array, NULL (failure)
 **/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
