#include "main.h"

/**
 * puts_half - function that print half of string
 * @str: string passed
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int d;

	while (str[i++])
		j++;
	if ((j % 2) == 0)
		d = j / 2;
	else
		d = (j + 1) / 2;
	for (i = d; i < j; i++)
		_putchar(str[i]);
	_putchar('\n')
}
