#include "main.h"

/**
 * _strcpy -function that copies a string
 * @dest: pointer to the string array for copying
 * @src: number of elements to be extract
 *
 * Return: the dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
