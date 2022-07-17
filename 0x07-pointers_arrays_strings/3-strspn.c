#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to s
 * @accept: pointer to accept
 * s consists only of bytes from accepts
 *
 * Return: number of bytes in inital segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int l;

	l = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0' && accept[b] != s[a]; b++)
			;
		if (s[a] == accept[b])
			l++;
		if (accept[b] == '\0')
			return (l);
	}
	return (l);
}
