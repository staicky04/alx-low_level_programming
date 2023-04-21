#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: pointer to seperator
 * @n: counts of args
 * @...: arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lists;
	unsigned int i;
	char *str;

	va_start(lists, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(lists, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lists);
}
