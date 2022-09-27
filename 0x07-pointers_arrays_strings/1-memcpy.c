#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @n: number of byte
 * @src: source of memory area
 * @dest: destination of memory
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

