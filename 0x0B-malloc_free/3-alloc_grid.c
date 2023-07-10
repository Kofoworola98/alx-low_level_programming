#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - This function returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **bee;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	bee = malloc(sizeof(int *) * height);

	if (bee == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		bee[i] = malloc(sizeof(int) * width);

		if (bee[i] == NULL)
		{
			for (; i >= 0; i--)
				free(bee[i]);

			free(bee);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			bee[i][j] = 0;
	}

	return (bee);
}
