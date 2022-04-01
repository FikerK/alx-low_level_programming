#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be concatenated
 * @n: byte from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0, i;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (*(src + b) != '\0')
	{
		b++;
	}
	if (n > b)
	{
		n = b;
	}
	for (i = a; i < (a + n); i++)
	{
		dest[i] = src[c];
		c++;
	}
	return (dest);
}
