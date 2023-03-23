#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * Return: 1 as success, 0 otherwise
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
