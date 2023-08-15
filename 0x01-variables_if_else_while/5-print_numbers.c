#include <stdio.h>

/**
 * main - entry point
 * Descreption: single digit
 * Return: Always 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
