#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - numbers
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
