#include <stdio.h>

/**
 * main - Entry point, prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* print single digit numbers */
	for (i = 0; i <= 9; i++)
	{
	putchar(i + 48);
	}
	
	/* print new line */
	putchar('\n');

	return (0);
}

