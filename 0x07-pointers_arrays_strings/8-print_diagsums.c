#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, j;
	int **p;

	p = &a;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(*(p + i) + j);
			}
			else if (i + j == size - 1)
			{
				sum2 += *(*(p + i) + j);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
