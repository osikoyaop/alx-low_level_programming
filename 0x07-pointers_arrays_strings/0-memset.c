#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory
 * @b: parameter for constant byte
 * @n: number of byte
 * @s: pointer
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	 int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;

		i++;
		n--;
	}
	return (s);
}
