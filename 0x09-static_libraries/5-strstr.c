#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: str
 * @needle: str
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *ptr = needle;

		while (*i == *ptr && *ptr != '\0')
		{
			i++;
			ptr++;
		}
		if (*ptr == '\0')
			return (haystack);
	}
	return (0);
}
