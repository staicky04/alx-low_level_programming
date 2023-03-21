#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int chars;
	int i;

	for (i = 0, chars = 'a'; i <= 10, chars <= 'z'; i++, chars++)
	{
		_putchar(chars);
	}
	_putchar("\n");
}
