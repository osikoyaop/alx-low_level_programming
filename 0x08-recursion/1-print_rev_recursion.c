#include "main.h"

/**
 * _print_rev_recursion - func that print a streing in reverse
 * @s: string to print out
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
