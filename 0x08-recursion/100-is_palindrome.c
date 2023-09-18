#include "main.h"

/**
 * last_index - string
 * @s: pointer to string
 * Return: num
 */

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int x = 0;

	if (*s > '\0')
		x = x + last_index(s + 1) + 1;
	return (x);
}

/**
 * is_palindrome - returns 1 if a string else 0
 * @s: pointer to string
 * Return: always 0
 */

int is_palindrome(char *s)
{
	int end;

	end = last_index(s);
	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - function
 * @s: string
 * @end: num
 * @start: num
 * @mod: num
 * Return: 0
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
