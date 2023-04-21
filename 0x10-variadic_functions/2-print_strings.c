#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer to seperator
 * @n: counts of args
 * @...: arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lists;

	va_start(lists, n);

	unsigned int i;

	char *str;

	for (i = 0; i < n; i++)
	{
		str = va_arg(lists, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != (n - 1))
		{
			printf("%c ", *separator);
		}
	}
	putchar('\n');
	va_end(lists);
}
