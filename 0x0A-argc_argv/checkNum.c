#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check if string there are digit
 * @str: array string
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;

	c = 0;
	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

