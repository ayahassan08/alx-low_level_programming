#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: a pointer
 * Return: Always 0 (Success)
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
