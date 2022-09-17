#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - print character '\' n times
 *@n: number of characters to draw
 *Return: returns nothing
 */

void print_diagonal(int n)
{
	int draw;
	int space;

	if (n > 0)
	{
		for (draw = 1; draw < n; draw++)
		{
			for (space = 1; space < draw; space++)
			{
				_putchar(' ');
			}
				_putchar('\\');

				if (draw == (n- 1))
				{
					continue;
				}
				_putchar('\n');
		}
	}
	_putchar('\n');
}
