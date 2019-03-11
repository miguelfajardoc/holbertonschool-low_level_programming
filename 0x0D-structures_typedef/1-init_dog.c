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
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
