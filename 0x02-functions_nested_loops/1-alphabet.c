#include "main.h"

/**
* main - this function will print alphabet
* Return: always success
*
* print_alphabet -  will print alphabet */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
