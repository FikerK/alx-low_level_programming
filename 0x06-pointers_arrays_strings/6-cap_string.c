#include "main.h"

/**
 * cap_string - capitalizes a string
 * @str: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int a = 0, i;

	while (*(str + a) != 0)
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		if ((*(str + i) == ',' || *(str + i) == ';' || *(str + i) == '.'
	|| *(str + i) == '!' || *(str + i) == '?' || *(str + i) == '"' ||
	*(str + i) == '(' || *(str + i) == ')' || *(str + i) == '{' ||
	*(str + i) == '}' || *(str + i) == ' ' || *(str + i) == '	' ||
	*(str + i) == 10) &&	(*(str + (i + 1)) >= 97 && *(str + (i + 1)) <= 122))
		{
			*(str + (i + 1)) -= 32;
		}
	}
	return (str);
}
