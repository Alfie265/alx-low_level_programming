#include <stdio.h>

/**
 * main - prints all arguements it receives, including the first one
 * print one arguement per line
 * @argc: number of command line arguements
 * @argv: array of pointers to the command line arguements
 *
 * Return: 0 Always successful
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
