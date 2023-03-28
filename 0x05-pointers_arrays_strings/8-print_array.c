#include "main.h"

/**
 * print_array - function prints n element of an array
 * @arr: array name
 * @n: is the number of array
 * return : arr and n elements
 */

void print_array(int *arr, int n)
{

	int i;
	for (i = 0; i < (n - 1); i++)
	{
	printf("%d, ", arr[i]);
	}
	if (i == (n - 1))
	{
	printf("%d", arr[n - 1]);
	}
	printf("\n");
}
