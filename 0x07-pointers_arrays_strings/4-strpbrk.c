#include "main.h"

/**
* _strpbrk - function that searches a given string for the first
* occurrence of any character in a specified set of characters
* @s: input value
* @accept: input value
* Return: always success
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	return (s);
	}
	s++;
	}
	return ('\0');
}

