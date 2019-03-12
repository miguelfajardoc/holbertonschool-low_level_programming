#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize dog.
 * @d: the structure of the dog d
 * @name: pointer to the name
 * @age: the age
 * @owner: the owner
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
}
