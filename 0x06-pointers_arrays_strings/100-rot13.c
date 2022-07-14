#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @a: input string.
 *
 * Return: a
 */

char *rot13(char *a)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(a + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(a + count) == alphabet[i])
			{
				*(a + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (a);
}
