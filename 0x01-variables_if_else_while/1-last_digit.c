#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	char *result;

	if (n > 5)
		result = "and is greater than 5";
	else if (n == 0)
		result = "and is 0";
	else
		result = "and is less than 6 and not 0";

	printf("Last digit of %d is %s\n", n, result);
	return (0);
}
