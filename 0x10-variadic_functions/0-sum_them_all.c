#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments passed
 * @n: counts of the argument passed
 * @...: elipsis - the arguments
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lists;
	unsigned int i, total = 0;

	va_start(lists, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(lists, int);
	}
	va_end(lists);

	return (total);
}
