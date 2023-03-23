#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Loop through 0 to 14 10 times
 * Return: 1 as success, 0 otherwise
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
