#include "main.h"

/**
 * _strncat - function concatenates 2 strings
 * @dest: pointer to dest
 * @src: pointer to source
 * @n: most number of bytes
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	c = 0;
	
	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
