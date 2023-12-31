#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Always 0 (Success)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
