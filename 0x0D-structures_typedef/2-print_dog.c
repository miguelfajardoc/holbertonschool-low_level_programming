#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print dog.
 * @d: the structure of the dog d
 * Return: nil when is null.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
}
