#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Loop through 0 to 9 but skip 2 & 4
 * Return: 1 as success, 0 otherwise
 */
int print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		putchar(i);
	}
}
