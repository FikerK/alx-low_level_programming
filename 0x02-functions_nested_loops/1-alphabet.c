#include "main.h"

/**
 * main - prints the alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alph;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
