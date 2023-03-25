#include "main.h"

/**
 * _isdigit - check if a character is digit
 * @x: the number to be checked
 *  Return: 1 if the character is digit 0 for any else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
