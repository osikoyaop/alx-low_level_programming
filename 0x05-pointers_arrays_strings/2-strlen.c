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
	
	len = 0;
	
	while (s(len) != '\0')
	len++;
	return (len);
}
