#include "main.h"

/**
* _memcpy - function that copies memory area
* @dest: memory where is stored
* @src: memory where is copied
* @n: number of bytes
* Return: copy of memory with n bytes
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = m;

	for (; a < i; a++)
	{
	dest[a] = src[a];
	n--;
	}
	return (dest);
}
