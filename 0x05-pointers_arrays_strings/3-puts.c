#include "main.h"

/**
 * _puts - function that prints a string
 * follow by a new line to stdout
 * @str: an input string
 * Return: returns nothing
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
	putchar(str[i]);
	i++;
}
putchar('\n');
}
