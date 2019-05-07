#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * is_palindrom - check if a string is a palindrome
 * @str: the string to check
 * Return: 1 if is true, 0 is false
 */
int is_palindrom(char *str)
{
	int i = 0, j = 0;

	j = strlen(str) - 1;
	while (i < j)
	{
		if (str[i] != str[j])
		{
			free(str);
			return (0);
		}
		i++;
		j--;
	}
	return (1);
}
/**
 * itoa - convert a number in a string
 * @num: the number to convert
 * Return: the string
 */
char *itoa(int num)
{
	int i, rem, len = 0;
	long int n;
	char *str;
	int sign = 1;

	if (num == 0)
		len++;
	if (num < 0)
	{
		sign--;
		num = -num;
	}
	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	str = malloc(sizeof(char) * (len + 1 + (-sign + 1)));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + sign)] = rem + '0';
	}
	if (sign == 0)
		str[0] = '-';
	str[len + (1 - sign)] = '\0';
	return (str);

}
int main(void)
{
	int x = 999;
	int y = 999;
	int i;
	int result;
	int max = 0;
	int iter = 0;
	/* int count = 0; */
	/* int count2 = 0; */

	while(x > 0)
	{
		printf("x: %d, y: %d = %d\n", x, y, x*y);
		result = x * y;
		i = is_palindrom(itoa(result));
		if (i == 1)
		{
			if (result > max)
			{
				max = result;
				iter = 0;
			}
			else if (iter == 5)
				break;
			else
				iter ++;
		}
		if (x == y)
		{
			x--;
			y = 999;
		}
		else
			y--;
	}
	printf("is palindrom:%d %d", max, i);
	return (0);
}
