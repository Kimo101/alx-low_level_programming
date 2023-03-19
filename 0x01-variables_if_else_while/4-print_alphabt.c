#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	/* print each lowercase letter except q and e */
	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
	{
	putchar(letter);
	}
	letter++;
	}
	/* print new line */
	putchar('\n');

	return (0);
}

