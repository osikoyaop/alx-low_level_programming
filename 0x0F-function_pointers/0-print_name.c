#include "function_pointers.h"

/**
 * print_name - A func that prints a name
 * @name: name to input
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
