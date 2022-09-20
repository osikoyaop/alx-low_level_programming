#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line
 * @s: parameter for string
 * Return: 0
 */

void print_rev(char *s)
{
	int count;
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	for (count = 1; count <= length; count++)
	{
		_putchar(s[length - count]);
	}
	_putchar('\n');
}
