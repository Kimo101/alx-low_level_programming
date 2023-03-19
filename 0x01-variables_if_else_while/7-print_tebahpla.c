#include <stdio.h>

/**
 * main - Entry point, prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* print the lowercase alphabet in reverse */
	for (i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}
	/* print new line */
	putchar('\n');

	return (0);
}

