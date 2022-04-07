#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sizedr - gives the unwhite spaced size of string
 * @str: string to be sized
 * Return: size of str
 */

int sizedr(char *str)
{
	int i = 0, j = 0, s = 0, f;

	while (str[i])
		i++;
	for (j = 0; j < i; j++)
	{
		f = 0;
		while (str[j] != ' ')
		{
			j++;
			f = 1;
		}
		if (f == 1)
			s++;
	}
	return (s);
}

/**
 * initloco - initialize splited string
 * @str: unsplited string
 * @p: splited string pointer
 * @i: str length
 * Return: pointer to the splited array of words
 */

char **initloco(char *str, char **p, int i)
{
	int a, j = 0, k = 0, f;

	for (a = 0; a < i; )
	{
		f = 0;
		while (str[a] != ' ')
		{
			p[j][k] = str[a];
			k++;
			a++;
			f = 1;
		}
		if (f == 1)
		{
			p[j][k] = '\0';
			k = 0;
			j++;
		}
		if (f == 0)
			a++;
	}
	return (p);
}
/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **p;
	int i = 0, j = 0, f = 0, g, a, s = 0;

	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	s = sizedr(str);
	printf("sRaaw %d\n", s);
	p = malloc(sizeof(char *) * s);
	if (p == 0)
		return (0);
	for (g = 0; g < i; g++)
	{
		for (f = 0; f < s; )
		{
			a = 0;
			while(str[g] != ' ')
			{
				g++;
				j++;
				a = 1;
			}
			if (a == 1)
			{
				p[f] = malloc(sizeof(char) * (j + 1));
				if (p[f] == NULL)
					return (0);
				j = 0;
				f++;
			}
			g++;
		}
	}
	p = initloco(str, p, i);
	return (p);
}
