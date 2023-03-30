#include "main.h"

/**
* _strcat - concatenate two strings
* @dest: first entered string
* @src: secomd entered string
* Return: void
*/

char *_strcat(char *dest, char *src)
{

	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
