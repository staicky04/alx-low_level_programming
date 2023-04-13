#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that returns a reference of a concatenated string
 * @s1: string1
 * @s2: string2
 * Return: pointer to array, NULL (failure)
 **/
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < len2; i++)
	{
		if (s1[i] != '\0' || s2[i] == '\0')
			break;
		s1[len1 + i] = s2[i];
	}
	return (s1);
}
