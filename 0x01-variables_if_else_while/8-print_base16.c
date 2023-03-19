#include <stdio.h>

/**
 * main - Entry point, prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* print the numbers 0 to 9 */
	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	/* print the lowercase letters a to f */
	for (i = 0; i < 6; i++)
	{
	putchar(i + 'a');
	}
	/* print new line */
	putchar('\n');

	return (0);
}

