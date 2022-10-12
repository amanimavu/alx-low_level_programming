#include "dog.h"
#include <string.h>
#include <stdlib.h>

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
	char *name_dest = malloc(sizeof(char) * (strlen(name) + 1));
	char *owner_dest = malloc(sizeof(char) * (strlen(owner) + 1));

	Doggie = &Dog;
	strcpy(name_dest, name);
	strcpy(owner_dest, owner);
	if (Doggie)
	{
		Doggie->name = name_dest;
		Doggie->age = age;
		Doggie->owner = owner_dest;
	}

	return (Doggie);
}
