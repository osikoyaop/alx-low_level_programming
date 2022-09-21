#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character followed by new line
 * @str: string to be passed
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i++] != '\0')
		i++;
	printf("%d", [i]);
	printf('\n');
}
