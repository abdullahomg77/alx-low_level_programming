#include "dog.h"

/**
 * init_dog - inti dog
 * @d: the dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: none
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
