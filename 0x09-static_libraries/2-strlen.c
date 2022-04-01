#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string to be measured
 * Return: int length of a string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != 0)
	{
		a++;
	}
	return (a);
}
