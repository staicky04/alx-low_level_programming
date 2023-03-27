#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int r_str = 0;
	int o;

	while (*s != '\0')
	{
		r_str++;
		s++;
	}
	s--;
	for (o = r_str; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

