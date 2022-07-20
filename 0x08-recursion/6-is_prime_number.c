#include "main.h"

/**
 * prime - checks if a nuber is prime
 * @n: input integer
 * @a: iteration
 *
 * Return: 1 if prime, 0 otherwise
 */

int prime(unsigned int n, unsigned int a)
{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, a + 1));
}


/**
 * is_prime_number - return 1 if the integer is prime
 * number or 0 if it is not
 * @n: input integer
 *
 * Return: 1 if prime, otherwise
 */
int is_prime_number(int n)
{
	if ((n < 0) || (n == 0) || (n == 1))
		return (0);
	else
		return (prime(n, 2));
}
