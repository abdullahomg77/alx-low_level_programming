#include <stdlib.h>
#include "dog.h"

/**
 *  _strlen - lenght
 *  @s: str
 *  Return: n
*/

int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * _strcpy - copy
 * @dest: str
 * @src: str
 * Return: pointer to string
*/

char *_strcpy(char *dest, char *src)
{
	int t, n;

	t = 0;

	while (src[t] != '\0')
	{
		t++;
	}
	for (n = 0; n < t; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}

/**
 * new_dog - function
 * @name: str
 * @age: number in years
 * @owner: str
 * Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int t1, t2;

	t1 = _strlen(name);
	t2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (t1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (t2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
