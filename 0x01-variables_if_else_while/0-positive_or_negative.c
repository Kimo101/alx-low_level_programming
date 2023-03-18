#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main Prints if number is positive, zero or negative
 * return(0) success
 */

int main(void)
{
    int n;
    srand(time(0));
    n = rand() % 200 - 100;
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }
    return 0;
}

