#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **upd;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	upd = malloc(sizeof(int *) * height);

	if (upd == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		upd[x] = malloc(sizeof(int) * width);

		if (upd[x] == NULL)
		{
			for (; x >= 0; x--)
				free(upd[x]);

			free(upd);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			upd[x][y] = 0;
	}

	return (upd);
}
