#include <stdio.h>

/**
 * main - prints the program's name followed by new line
 * @argc: number of command line arguements
 * @argv: array of pointers to strings that are command line arguements
 *
 * Return: 0 Always successful
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
