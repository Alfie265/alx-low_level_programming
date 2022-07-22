#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * print the result of the multiplication followed by new line
 * @argc: number of command line arguements
 * @argv: array of pointers to the command line arguements
 *
 * Return: 0 Always successful
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
