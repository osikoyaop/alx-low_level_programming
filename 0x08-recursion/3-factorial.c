#include "main.h"

/**
 * factorial - func that return the factorial of a number
 * @n: the number
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
