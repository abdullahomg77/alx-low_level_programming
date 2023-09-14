#include "3-calc.h"

/**
 * get_op_func - return pointer
 * @s: string
 * Return: pointer
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int n = 0;

	while (n < 5)
	{
		if (s && s[0] == ops[n].op[0] && !s[1])
			return (ops[n].f);
		n++;
	}

	return (NULL);
}
