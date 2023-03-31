#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse a string
 * @a: string to be reversed
 * @n: index to reverse the string
 * Return: 0 for success, 1 for failure
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
