#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: -,0,+ integer for less, match, greater respectively
 */

int _strcmp(char *s1, char *s2)
{
	int i, j = 0, a = 0;

	while (*(s1 + a) != 0 && *(s2 + a) != 0)
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		if (s1[i] < s2[i])
		{
			j = (s1[i] - s2[i]);
			break;
		}
		else if (s1[i] == s2[i])
		{
			j = 0;
		}
		else if (s1[i] > s2[i])
		{
			j = (s1[i] - s2[i]);
			break;
		}
	}
	return (j);
}
