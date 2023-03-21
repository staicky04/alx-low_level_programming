#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char chars;

	for (chars = 'a'; chars <= 'z'; chars++)
	{
		_putchar(chars);
	}
	_putchar('\n');	
}
