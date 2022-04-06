#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sized - gives the unwhite spaced size of string
 * @str: string to be sized
 * Return: size of str
 */

int sized(char *str)
{
	int i = 0, j = 0, f;

	while (str[i])
	{
		f = 0;
		while (str[i] == ' ')
		{
			i++;
			f = 1;
		}
		j++;
		if (f == 0)
			i++;
	}
	return (j);
}
/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **p;
	int i = 0, j = 0, k = 0;

	if (str == NULL)
		return (0);
	p = malloc(sizeof(char) * sized(str));
	if (p == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			while(str[i] != ' ')
			{
				printf("s %d\n", sized(str));
				p[j][k] = str[i];
				i++;
				printf("s %d\n", sized(str));
				k++;
			}
			p[j][k] = '\0';
			k++;
		}
		j++;
	}
	return (p);
}
