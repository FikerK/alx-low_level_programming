#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: nothing.
 */

void print_rev(char *s)
{
	int a = 0;

	while (*(s + a) != 0)
	{
		a++;
	}
	a = a - 1;
	while (*(s + a) != 0)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}
