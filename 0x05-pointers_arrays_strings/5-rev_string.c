#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 */

void rev_string(char *s)
{
	int len = 0;
	int a = 0;
	char *b = s;
	int c = 0;
	int d;
	char e;

	while (*b != '\0')
	{
		b++;
		len++;
	}
	a = len - 1;
	for ( ; c < ((a / 2) + 1) ; c++)
	{
		d = (a - c);
		e = s[c];
		s[c] = s[d];
		s[d] = e;
	}
}
