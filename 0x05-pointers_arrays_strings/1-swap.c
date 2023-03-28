#include <stdio.h>

/**
 * swap_int - swaps the values f two intergers
 * @a: the first int to be swapped
 * @b: the second int to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/*the function that swaps the value of two intergers*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
