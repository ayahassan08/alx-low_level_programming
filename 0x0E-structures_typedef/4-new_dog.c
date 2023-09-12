#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Return NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	int len_name, len_owner;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	len_name = strlen(name);
	len_owner = strlen(owner);

	d->name = malloc(len_name + 1);
	d->owner = malloc(len_owner + 1);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);

	d->age = age;

	return (d);
}
