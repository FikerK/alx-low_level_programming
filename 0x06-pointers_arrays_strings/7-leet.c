#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	int a = 0, i, j;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leeted[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*(str + a) != 0)
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(str + i) == letters[j])
			{
				*(str + i) = leeted[j];
			}
		}
	}
	return (str);
}
