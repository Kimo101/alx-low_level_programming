#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * main Prints if number is positive, zero or negative
 * return(0) success
 *
 */

int main()
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

    return 0;
}

