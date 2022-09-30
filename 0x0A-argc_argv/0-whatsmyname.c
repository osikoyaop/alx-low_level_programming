#include <stdio.h>

/**
 * main - write a program that prints its name
 * followed by new line
 * @argc: argument count
 * @argv: argument vector value
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
