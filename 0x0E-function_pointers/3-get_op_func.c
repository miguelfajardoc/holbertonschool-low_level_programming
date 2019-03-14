#include <stdio.h>
#include <stdlib.h>
#include  "3-calc.h"
/**
 * get_op_func - send the input to the right function
 * @s: the operator
 * @a: the first number
 * @b: the second number
 * Return: 0 if false, something else otherwise.
 */
int (*get_op_func(char *s))(int i, int j)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i< 6)
	{
		if (*s == (*ops[i].op))
			break;
		i++;
	}
	return (*ops[i].f);
}
