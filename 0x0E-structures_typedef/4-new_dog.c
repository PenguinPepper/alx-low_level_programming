#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * my_cpym - reserve memory and copy string
 * @str: string to be copied or variable containing string
 *
 * Return: pointer
 */
char *my_cpym(char *str)
{
	unsigned int i;
	int index = 0;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		index++;
	index += 1;

	dest = malloc(index * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	dest[i] = str[i];
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog owner
 *
 * Return: NULL if function fails else on success 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = my_cpym(name);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->age = age;

	doggo->owner = my_cpym(owner);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	return (doggo);
}

