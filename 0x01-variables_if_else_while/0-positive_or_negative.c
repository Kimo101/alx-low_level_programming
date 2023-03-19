#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a randomly generated number is positive, negative, or 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(NULL));

	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n == 0)
	{
	printf("is zero\n");
	}
	else
	{
	printf("is negative\n");
	}

	return (0);
}

