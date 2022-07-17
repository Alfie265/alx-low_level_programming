#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer
 * @size: pointer to the size
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int b = 0;
	int c = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		b += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		c += a[i];
	}

	printf("%d, %d\n", b, c);
}
