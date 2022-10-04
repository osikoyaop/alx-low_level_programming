#include "main.h"

/**
 * _strdup - fuc that duplicate a string
 * and return a pointer to a new space in memory
 * @str: string to be duplicated
 * Return: a string pointer
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = (char *)malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (j < 1)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
