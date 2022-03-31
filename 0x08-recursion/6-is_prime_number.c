#include "main.h"

/**
 * is_prime - if num is prime or not
 * @n: num
 * @i: divisor
 * Return: 0 or 1
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i - 1));
}

/**
 * is_prime_number - distinguish if prime or not
 * @n: number to be scrutinized
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}
