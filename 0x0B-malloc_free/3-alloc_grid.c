#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pinter to a 2D array
 * @width: width
 * @height: height
 * Return: pointer or 0 if it fails
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **p;

	if (width <= 0 || height <= 0)
		return (0);
	p = malloc(sizeof(int *) * height);
	if (p == 0)
		return (0);

	for (k = 0; k < height; k++)
	{
		p[k] = malloc(sizeof(int) * width);
		if (p[k] == NULL)
		{
			for (k = 0; k < height; k++)
				free(p[k]);
			free(p);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
