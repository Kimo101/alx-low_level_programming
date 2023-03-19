#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int n, lastDigit;

	n = rand() - (RAND_MAX / 2);
	lastDigit = (n % 10);
	srand(time(0));
	if (lastDigit > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
	printf("and is 0\n");
	}
	else
	{
	printf("and is less than 6 and not 0\n");
	}

	return (0);
}

