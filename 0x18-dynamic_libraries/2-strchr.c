#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string in which a character is to be located at.
 * @c: character to be located
 * Return: pointer to the first occurance of c. NULL if c not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != c)
	{
		i++;
	}
	return (s + i);
}
