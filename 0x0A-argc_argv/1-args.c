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
	printf("%d\n", argc - 1);
	return (0);
}
