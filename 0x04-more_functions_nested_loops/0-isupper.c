#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is a capital letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 64 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
