#include "main.h"

/**
 * operation - returns the natural
 * square root of a number
 * @n: the number
 * @a: iteration
 *
 * Return: square root or -1
 */

int operation(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + operation(n, a + 1));
}

/**
 * _sqrt_recursion - returns the natural square
 * root of a number
 * @n: input number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (operation(n, 2));
}
