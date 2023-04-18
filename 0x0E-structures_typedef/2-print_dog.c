#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog informations
 * @d: a structure of type dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nothing");
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
                printf("Age: (nil)");
        else
                printf("Age: %f\n", d->age);
	if (d->owner == NULL)
                printf("Owner: (nil)");
        else
                printf("Owner: %s\n", d->owner);
}
