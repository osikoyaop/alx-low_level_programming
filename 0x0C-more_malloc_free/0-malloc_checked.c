#include "main.h"

/**
 * malloc_checked - func allocates memory using malloc
 * @b: bytes allocated
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
