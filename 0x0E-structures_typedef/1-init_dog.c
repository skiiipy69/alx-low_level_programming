#include "dog.h"

/**
 * init_dog - initializes a structure of type dog
 * @d: struct dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

