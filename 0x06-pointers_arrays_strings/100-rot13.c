#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, a = 0;

	while (*(str + a) != '\0')
	{
		for (i = a; (i < a + 1 && (*(str + a) >= 97 && *(str + a) <= 122))
	|| (i < a + 1 && *(str + a) >= 65 && *(str + a) <= 90); i++)
		{
			if (*(str + a) > 109 || (*(str + a) > 77 && *(str + a) < 91))
			{
				*(str + a) -= 13;
			}
			else
			{
				*(str + a) += 13;
			}
		}
		a++;
	}
	return (str);
}
