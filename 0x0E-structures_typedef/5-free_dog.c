#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: name of the new type dog_t
 *
 * Return: if all goes well 0
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
