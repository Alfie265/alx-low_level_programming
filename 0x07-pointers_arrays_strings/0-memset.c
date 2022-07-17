#include "main.h"

/**
 *  _memset- fills memory with a constant byte
 * @s: pointer to the memory location
 * @b: the constant byte
 * @n: input integer
 *
 * Return: pointer to the memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}

	return (s);
}
