#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n += 1;
	}
	return (n);
}
