#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 Success
 *
 * Description: this program print the alphabet
 */
int main(void)
{
	int w = 0;
	int x = 0;
	int y = 0;
	int zz = 0;
	int zd = 1;

	int z = zd;

	int k;
	int m;
	int j;
	int i;

	for (k = w ; k < 10 ; k++)
	{
		for (m = x ; m < 10 ; m++)
		{
			for (j = y ; j < 10 ; j++)
			{
				for (i = z ; i < 10; i++)
				{
					putchar(k + '0');
					putchar(m + '0');
					putchar(32);
					putchar(j + '0');
					putchar(i + '0');
					if (k == 9 && m == 8 && j == 9 && i == 9)
						;
					else
					{
						putchar(44);
						putchar(32);
					}
					if (m == 8 && j == 9 && i == 9)
					{
						zd = 0;
						z = zz;
						y++;
					}
					else if (i == 9 && j == 9)
					{
						zd++;
						z = zd;
					}
					else if (i == 9)
						z = zz;
				}

			}

		}
	}

		putchar('\n');

	return (0);
}
