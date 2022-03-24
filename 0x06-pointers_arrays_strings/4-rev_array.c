#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int b = 0, r = 0;

	n = n - 1;
	while (n != b && n + 1 != b)
	{
		r = *(a + n);
		*(a + n) = *(a + b);
		*(a + b) = r;
		n--;
		b++;
	}
}
