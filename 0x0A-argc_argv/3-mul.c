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
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);

}
