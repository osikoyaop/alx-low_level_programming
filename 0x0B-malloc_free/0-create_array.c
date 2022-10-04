#include "main.h"

/**
 * create_array - func that create array of chars
 * @size: size of array
 * @c: character an array is initialized with
 * Return: a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
