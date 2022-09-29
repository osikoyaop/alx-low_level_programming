#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: string to check
 *@c: character to check for
 *
 *Return: pointer to spot in s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
