#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name != 0)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (0)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != 0)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (0)\n");
	}
}
