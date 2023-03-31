#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - appends src to dest
 * @dest: src will be appended to me
 * @src: i will be appended to dest
 * Return: 0 for success, 1 for failure
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
