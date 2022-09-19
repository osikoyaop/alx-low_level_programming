#include <stdio.h>
#include "main.h"

/**
 * main - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * Return: 0
 */

void reset_to_98(int *n);
{
	int n;
	*n = 408;

	_putchar("n = %d\n", n);
	reset_to_98("&n");

	_putchar("*n = %d\n", *n);
	_putchar('\n');
}
