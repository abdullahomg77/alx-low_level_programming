include "main.h"

/**
 * main - entry point
 * Description: computes the sum of all
 * Return: Always 0
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) || (num % 5))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
