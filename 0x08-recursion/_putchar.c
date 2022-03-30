#include <unistd.h>

/**
 * _putchar - a function that writes a character out
 * Return: the char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
