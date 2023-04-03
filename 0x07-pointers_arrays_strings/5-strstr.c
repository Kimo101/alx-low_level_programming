#include "main.h"

/**
 * _strstr - find the first occurrence of a substring within a given string
 * @haystack: input value
 * @needle: input value
 * Return: pointer to the beginning of the located substring
 * or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *p = needle;

	while (*I == *p && *p != '\0')
	{
	I++;
	p++;
	}

	if (*p == '\0')
	{
		return (haystack);
	}
	}

	return (0);
}

