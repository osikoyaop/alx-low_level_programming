#include <stdio.h>
#include "main.h"

/**
 * main - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: parameter
 * Return: 0
 */

void reset_to_98(int *n);
{
	int n;

	n = 402;

	putchar("n = %d\n", n);
	reset_to_98("&n");

	putchar("n = %d\n", n);
	putchar('\n');
	return (0);
}
