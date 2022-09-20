#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: character whose length is returned
 * Return: 0
 */

int _strlen(char *s)
{
	int len;
	char *s[7] = "cisfun"

	len = 0;

	for (len = 0; *s[len] != '\0'; len++)
	{
		_putchar("length of the string: %d", len);
	}
	_putchar('\n');
}
