#include "main.h"

/**
* _puts_recursion - function similar to puts
* @s: input value
* Return: always succes
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
