#include <unistd.h>

/**
 * main - a function that writes a character
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
