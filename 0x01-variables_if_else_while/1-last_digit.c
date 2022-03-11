
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of random number and
 * show if it's greater than 5, 0 or less than 6 and !0
 *
 * Return: 0
 */
int main(void)
{
	int n;
	/*last digit of n: m*/
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is ", n);
	if (m > 5)
	{
		printf("%d and is greater than 5\n", m);
	}
	else if (m == 0)
	{
		printf("%d and is 0\n", m);
	}
	else if (m < 6 && m != 0)
	{
		printf("%d and is less than 6 and not 0\n", m);
	}
	return (0);
}
