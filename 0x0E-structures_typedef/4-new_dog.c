#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: char name
 * @age: int age
 * @owner: char owner
 * Return: new dog POINTER
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ne_dog;
	int a, x, y;
	char *n, *o;

	ne_dog = malloc(sizeof(struct dog));
	if (ne_dog == NULL)
		return (NULL);

	for (a = 0; name[a] != '\0'; a++)
		;
	for (x = 0; owner[x] != '\0'; x++)
		;

	n = malloc(sizeof(char) * a + 1);
	if (n == NULL)
	{
		free(ne_dog);
		return (NULL);
	}
	o = malloc(sizeof(char) * x + 1);
	if (o == NULL)
	{
		free(n);
		free(ne_dog);
		return (NULL);
	}
	for (y = 0; y <= a; y++)
		n[y] = name[y];
	for (y = 0; y <= x; y++)
		o[y] = owner[y];

	ne_dog->name = n;
	ne_dog->age = age;
	ne_dog->owner = o;

	return (ne_dog);
}
