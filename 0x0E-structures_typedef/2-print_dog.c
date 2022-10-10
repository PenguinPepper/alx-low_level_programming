#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the name of the new type dog
 *
 * Description: function that prints a struct dog
 * If an element of d is NULL, print (nil) instead
 * of this element. (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 * Return: If all goes well 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age <= 0)
		printf("Age: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
