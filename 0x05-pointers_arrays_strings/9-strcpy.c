#include "main.h"

/**
 * _strcpy - copy the string pointed to by src to the buffer pointed to by dest
 * @dest: poiter to be copied to
 * @src: pointer to be copied
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0, i;

	while (*(src + b) != 0)
	{
		b++;
	}
	for (i = 0; i <= b; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
