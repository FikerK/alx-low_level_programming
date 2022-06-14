#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: scanned string
 * @needle: string to be matched
 * Return: pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	/*i & j = haystack & needle increment, a = needle size*/
	int i = 0, j = 0, a = 0, n = 0;

	while (*(needle + a) != '\0')
	{
		a++;
	}
	while (*(haystack + i) != '\0')
	{
		for (j = 0; j < a; j++)
		{
			if (*(haystack + i + j) == *(needle + j))
			{
				n++;
			}
		}
		if (n == a)
		{
			break;
		}
		n = 0;
		i++;
	}
	return (haystack + i);
}
