#include "main.h"

/**
 * print_sign - prints sign of number
 *
 * @n: number to be checked for sign
 * Return: 1 if +ve, 0 if zero, -1 if -ve
 */
int print_sign(int n)
{
	int a = 0;

	if (n > 0)
	{
		a = 1;
	}
	else if (n == 0)
	{
		a = 0;
	}
	else if (n < 0)
	{
		a = -1;
	}
	return (a);
}
