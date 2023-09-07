#include "main.h"

/**
 * count_word - count number word
 * @s: string
 * Return: n words
*/

int count_word(char *s)
{
	int f, c, n;

	f = 0;
	n = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			n++;
		}
	}
	return (n);
}

/**
 * **strtow - splits the string to words
 * @str: string
 * Return: pointer or (Error)
*/

char **strtow(char *str)
{
	char **mat, *t;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				mat[j] = t - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	mat[j] = NULL;
	return (mat);
}
