#include "main.h"

/**
 * _strstr - locates a substring
 *  finds the first occurrence of the substring needle in the string haystack
 *  @needle: pointer
 *  @haystack: pointer
 *
 *  Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
