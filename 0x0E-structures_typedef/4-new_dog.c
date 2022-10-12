#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: dog_t pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t Dog;
	dog_t *Doggie;

	Doggie = &Dog;
	if (Doggie)
	{
		Doggie->name = name;
		Doggie->age = age;
		Doggie->owner = owner;
	}

	return (Doggie);
}
