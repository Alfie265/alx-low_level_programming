#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int b;
	int x;

	for (b = 0; b < n--; b++)
	{
		x = a[b];
		a[b] = a[n];
		a[n] = x;
	}
}
