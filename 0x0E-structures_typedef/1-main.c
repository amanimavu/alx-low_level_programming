#include "dog.h"
#include <stdio.h>

int main(void)
{
	struct dog my_dog;

	init_dog(NULL, "Poppy", 3.5, "Bob");
	if (sizeof(my_dog.name) > 0 && sizeof(my_dog.age))
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
