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
	int nums;

	for (nums = 48; nums <= 57; nums++)
	{
		putchar(nums);
		if (nums == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
