#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sigh(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sigh(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sigh(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sigh(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
