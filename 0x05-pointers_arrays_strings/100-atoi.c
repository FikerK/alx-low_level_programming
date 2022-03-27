#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int.
 */

int _atoi(char *s)
{
	/*n = number in string, sn = sign, a = digit of n, i = string number*/
	int n = 0, sn = 1, a = 1, i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == 45)
			sn *= -1;
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			n = (n * a) + (*(s + i) - '0');
			a = 10;
			if (*(s + (i + 1)) < 48 || *(s + (i + 1)) > 57)
				break;
		}
		i++;
	}
	if (sn == -1)
		n *= sn;
	return (n);
}
