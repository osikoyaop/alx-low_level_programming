#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory
 * with a constant byte b
 * @b: parameter of constant byte
 * @n: number of bytes
 * @s: pointer
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
		i++;
	{
		*(s + i) = b;
	}
	_putchar("%d\n", s);
	_putchar('\n');
}