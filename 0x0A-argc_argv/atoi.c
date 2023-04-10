#include <stdio.h>
#include "main.h"

/**
 * atoi - converts a string to an integer
 * @str: string to be converted
 * Return: the converted int from the string
 */

int atoi(char *str)
{
	int result = 0;
	int i = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i])
	{

		if (!(str[i] - '0' >= 0 && str[i] - '0' <= 9))
			return (-1);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
