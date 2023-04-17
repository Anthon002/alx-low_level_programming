#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog struct
 * @d: pointer
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
    {
		return;
    }
    else
    {
        printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
        printf("Age: %f\n", d->age);
        printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
    }
}
