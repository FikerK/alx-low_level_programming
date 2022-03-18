#include "main.h"

/**
 * print_numbers - prints the numbers 0-9
 * Return: 0
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
