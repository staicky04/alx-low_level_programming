#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, by applying the seperator
 * @separator: pointer to string
 * @n: counts of args
 * @...: arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lists;

	va_start(lists, n);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lists, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%c ", *separator);
		}
	}
	va_end(lists);
}
