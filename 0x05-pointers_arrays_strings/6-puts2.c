#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: the string to be print
 * return: nothing
 */

void puts(char *str)
{

	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	i++;
	}
	for (i = 0; i < j; i += 2)
	_putchar(str[i]);
	}
	_putchar('\n');
}
