#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @a: string
 *
 * Return: a
 */

char *string_toupper(char *a)
{
	int j = 0;

	while (a[j] != '\0')
	{
		if (a[j] >= 'a' && a[j] <= 'z')
			a[j] = a[j] - 32;
		j++;
	}
	return (a);
}
