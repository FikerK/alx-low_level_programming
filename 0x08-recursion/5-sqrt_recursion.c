#include "main.h"

/**
 * _sqrt - gives square root
 * @n: scrutinized integer
 * @i: manupilater 1
 * @j: manupilator 2
 * Return: sqrt of n
 */

int _sqrt(int n, int i, int j)
{
	if (i == 0 || n < 0)
		return (-1);
	if (i * j == n)
		return (i);
	return (_sqrt(n, i - 1, j - 1));
}

/**
 * _sqrt_recursion -gives the natural square root of a number
 * @n: number to be square rooted
 * Return: sqrt of n.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, n, n));
}
