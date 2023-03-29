#include "main.h"

/**
 *  _strcpy - function that copies the string pointed to by src
 *  @dest:destination of my string
 *  @src: copy from
 *  Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	int l = 0;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
