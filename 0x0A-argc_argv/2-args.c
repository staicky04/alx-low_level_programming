#include <stdio.h>
#include "main.h"

/**
 * main - return count of arguments passed, and strings passed resp.
 * @argc: int
 * @argv: strings
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	/* printf("%s\n", *argv);*/
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
