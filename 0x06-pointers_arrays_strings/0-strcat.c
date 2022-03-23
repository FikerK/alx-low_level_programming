#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be concatenated
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
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
	for (i = a; i < (a + b); i++)
	{
		dest[i] = src[c];
		c++;
	}
	return (dest);
}
