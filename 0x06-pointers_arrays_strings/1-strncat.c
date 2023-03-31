#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - appends src to dest
 * @dest: src will be appended to me
 * @src: i will be appended to dest
 * @n: collect from user
 * Return: 0 for success, 1 for failure
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	len1 = strlen(dest);
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
