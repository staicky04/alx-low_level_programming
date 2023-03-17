#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - lower alphabets
 * Return: Always 0
 */
int main(void)
{
	char lower_ch;

	for (lower_ch = 'a'; lower_ch <= 'z'; lower_ch++)
	{
		putchar(lower_ch);
	}
	putchar('\n');
	return (0);
}
