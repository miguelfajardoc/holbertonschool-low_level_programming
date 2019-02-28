#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number - find if a number is prime.
 * @n: the number to search.
 * @i: the iterator.
 * @q: the square root.
 * Return: return 1 if the number is prime, otherwise, return 0.
 */
int prime(int n, int i, int q);
int sqrtt(int n, int i);
int is_prime_number(int n)
{
	int i = 2;

	return (prime(n, i, sqrtt(n, 0)));

}

/**
 * sqrtt  - find the natural square root of a number.
 * @n: the number to find the square root.
 * @i: the iterator.
 * Return: the natural square root. if dont exist, return the top integer.
 */
int sqrtt(int n, int i)
{

	if (n < 0)
		n = (n * -1);
	if (i * i > n)
		return (i);
	else if (i * i < n)
		return (sqrtt(n, i + 1));
	else
		return (i);
}
/**
 * prime - find if a number is prime.
 * @n: the number to search.
 * @i: the iterator.
 * @q: the sqroot.
 * Return: return 1 if the number is prime, otherwise, return 0.
 */
int prime(int n, int i, int q)
{
	if (n % i == 0)
		return (0);
	else if (i > q)
		return (1);
	else
		return (prime(n, i + 1, q));
}
