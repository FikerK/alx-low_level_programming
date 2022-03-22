#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int to be swaped
 * @b: int to be swaped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
