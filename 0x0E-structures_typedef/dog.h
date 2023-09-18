#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Description: lost dog and have no one
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */
