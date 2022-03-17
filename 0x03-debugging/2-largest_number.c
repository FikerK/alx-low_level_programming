#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = 0, n = 0;

	if (a > b)
	{
		n = a;
	}
	else
	{
		n = b;
	}
	if (n > c)
	{
		largest = n;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
