#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two given numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int a, b, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	m = a * b;
	printf("%d\n", m);
	return (0);
}
