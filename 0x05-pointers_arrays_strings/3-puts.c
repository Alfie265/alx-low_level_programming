#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: pointer to the string
 */

void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
