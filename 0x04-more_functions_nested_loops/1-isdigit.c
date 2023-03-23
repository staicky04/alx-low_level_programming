#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is a capital letter, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
