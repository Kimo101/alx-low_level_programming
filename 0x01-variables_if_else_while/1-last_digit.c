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
	int n;
	n = rand();

	srand(time(0));
	printf("Last digit of %d is %d ", n, abs(n%10));
	if(n%10 > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (n%10 == 0)
	{
	printf("and is 0\n");
	}
	else
	{
	printf("and is less than 6 and not 0\n");
	}

	return (0);
}

