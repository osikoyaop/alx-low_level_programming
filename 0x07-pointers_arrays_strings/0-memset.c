#include "main.h"

/**
 * _memset - function that fills memory
 * @b: parameter for constant byte
 * @n: number of byte
 * @s: pointer
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
