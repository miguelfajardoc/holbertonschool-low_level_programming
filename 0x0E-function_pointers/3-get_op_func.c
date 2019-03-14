#include <stdio.h>
#include <stdlib.h>
#include  "3-calc.h"
/**
 * get_op_func - send the input to the right function
 * @s: the operator
 * Return: 0 if false, something else otherwise.
 */
int (*get_op_func(char *s))(int, int)
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
	while (i < 5)
	{
		if (*s == (*ops[i].op))
			return (*ops[i].f);
		i++;
	}
	printf("Error\n");
	return(NULL);
}
