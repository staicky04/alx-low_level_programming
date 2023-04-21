#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments passed
 * @n: counts of the argument passed
 * @...: elipsis - the arguments
 * Return: total
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list lists;

	va_start(lists, n);

	unsigned int i, total = 0;

	for (i = 0; i < n; i++)
	{
		total += va_arg(lists, int);
	}
	va_end(lists);
	return (total);
}
