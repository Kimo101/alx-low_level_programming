#include "main.h"

/**
* main - print alphabet
* Return: always success
*/

void print_alphabet(void) /*this function will print alphabets*/
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
