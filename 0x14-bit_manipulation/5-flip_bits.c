#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check = 1;
	unsigned int count = 0, i;

	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
