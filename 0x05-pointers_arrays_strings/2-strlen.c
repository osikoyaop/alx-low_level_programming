#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: character whose length is returned
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (s(count) != '\0')
		count++;
	return (count);
}
