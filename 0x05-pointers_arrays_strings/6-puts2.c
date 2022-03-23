#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * Return: nothing.
 */

void puts2(char *str)
{
	int a = 0, i;

	while (*(str + a) != 0)
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
