#ifndef DOG_H
#define DOG_H

/**
 * struct dog - properties of a dog
 * @name: char pointer to name of a dog
 * @age: int pointer to age of the dog
 * @owner: char pointer to name of the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
