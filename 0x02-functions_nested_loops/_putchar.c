#include <unistd.h>

/**
 * main - a function that writes a character out
 *
 * Return: the char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
