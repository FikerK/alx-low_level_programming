#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string whose half is to be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int a = 0, n, i;

	while (*(str + a) != 0)
	{
		a++;
	}
	if (a % 2 != 0)
		n = (a + 1) / 2;
	else
		n = a / 2;

	for (i = n; i < a; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
