#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: pointer
 * @src: pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
