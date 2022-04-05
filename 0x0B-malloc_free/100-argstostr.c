#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: argument vector
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i, j = 0, k = 0, l, m, n = 0;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		j = strlen(av[i]);
		k += (j + 1);
	}
	p = malloc(sizeof(char) * k + 1);
	if (p == NULL)
		return (0);
	for (l = 0; l < ac; l++)
	{
		j = strlen(av[l]);
		for (m = 0; m < j; m++)
		{
			p[n] = av[l][m];
			n++;
		}
		p[n] = '\n';
		n++;
	}
	return (p);
}
