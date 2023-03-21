#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		_putchar(chars);
	}
	_putchar('\n');
}
