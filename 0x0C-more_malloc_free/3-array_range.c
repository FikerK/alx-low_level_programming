#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum included value
 * @max: maximum included value
 * Return pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, s;

	if (min > max)
		return (0);
	s = max - min;
	p = malloc(sizeof(int) * (s + 1));
	if (p == NULL)
		return (0);
	for (i = 0; i <= s; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
