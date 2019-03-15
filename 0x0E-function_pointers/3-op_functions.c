#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - sum two number
 * @a: the first number
 * @b: the second number
 *
 * Return: 0 if false, something else otherwise.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - substract two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - substract two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - substract two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
