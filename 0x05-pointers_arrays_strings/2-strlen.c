#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: character whose length is returned
 * Return: 0
 */

int _strlen(char *s)
{
	int len;
	*s = "cisfun";

	for (len = 0; _strlen(*s) != '\0'; ++len)
	printf("length of the string: %d", len);
	return (0);
}
