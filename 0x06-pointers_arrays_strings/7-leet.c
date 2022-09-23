#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: dest
 */

char *leet(char *s)
{
	int count = 0, i;
	int low_letter[] = {97, 101, 111, 116, 108};
	int upp_letter[] = {65, 69, 79, 84, 76};
	int number[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_letter[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
