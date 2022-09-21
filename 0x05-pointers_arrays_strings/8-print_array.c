#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an input of elements
 * of an array of integers.
 * @a: an array of integers.
 *
 * @n: the numbers of elements to be printed.
 */

void pint_array(int *a, int n)
{
	int i;

	for (i =0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	pintf("\n");
}
