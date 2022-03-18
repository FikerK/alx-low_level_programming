#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the char _ should be printed
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
