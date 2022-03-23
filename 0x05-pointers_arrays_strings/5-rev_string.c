#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int a = 0, b = 0;
	char r;

	while (*(s + a) != 0)
	{
		a++;
	}
	a = a - 1;
	while (a != b && a - 1 != b)
	{
		r = *(s + b);
		*(s + b) = *(s + a);
		*(s + a) = r;
		a--;
		b++;
	}
}
