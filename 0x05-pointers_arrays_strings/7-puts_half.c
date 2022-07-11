#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * print the second half of the string
 * @str: pointer to the string
 *
 */

void puts_half(char *str)
{
	int len = 0;
	char *a = str;
	int b;

	while (*a != '\0')
	{
		a++;
		len++;
	}
	if (len % 2 == 0)
	{
		b = len / 2;
	}
	else
	{
		b = (len + 1) / 2;
	}
	for ( ; b < len ; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
