#include "main.h"

/**
 * print_alphabet - prints the alphabet in small letters
 *
 * calls _putchar for displaying each character at a time
 * Return: lowercase alphabets
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
