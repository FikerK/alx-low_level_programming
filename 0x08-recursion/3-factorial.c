#include "main.h"

/**
 * factorial - returns the factorial
 * @n: number to be factorialized
 * Return: -1 if n less than 0, 1 if 0, factorial number of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	/*base case*/
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
