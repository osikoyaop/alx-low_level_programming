#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * letter to uppercase
 * @str: input string
 * Return: return dest
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if ((*(str + count) >= 97) && (*(str + count) <= 122))
			*(str + count) = *(str + count) - 32;
		count++;
	}

	return (str);
}
