#include <stdio.h>
#include <stdlib.h>

/**
 * main - all start
 * @argc: integer
 * @argv: array
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int n = 0;
	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
			if (*p < '0' || *p > '9')
				return (printf("Error\n"), 1);
		n += atoi(argv[argc]);
	}
	printf("%d\n", n);
	return (0);
}
