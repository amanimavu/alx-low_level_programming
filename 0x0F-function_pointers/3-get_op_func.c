#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - selects the right operation
 * given an operator
 * @s: operator
 *
 * Return: poine
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while ((ops[i]).op)
	{
		if (*ops[i].op == *s && strlen(s) == 1)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
