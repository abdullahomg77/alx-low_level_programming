#include <stdio.h>
#include "main.h"

/**
 * main - all arguments receivesd
 * @argc: numbers
 * @argv: array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
