#include "function_pointers.h"

/**
 * print_name - prints name returned by pointer function
 * @name: name passed
 * @f: void function that accept the agument name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
