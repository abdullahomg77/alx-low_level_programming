#include "main.h"

/**
 * *argstostr - split word
 * @ac: int
 * @av: pointer array
 * Return: 0
*/

char *argstostr(int ac, char **av)
{
	int i, j, t = 0, l = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		p[t] = av[i][j];
		t++;
	}
	if (p[t] == '\0')
	{
		p[t++] = '\n';
	}
	}
	return (p);
}
