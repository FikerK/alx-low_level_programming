#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer to be computed
 * Return: positive integer
 */
int _abs(int n)
{
	int a = 0;

	if (n >= 0)
	{
		a = n;
	}
	if (n < 0)
	{
		a = -1 * n;
	}
	return (a);
}
