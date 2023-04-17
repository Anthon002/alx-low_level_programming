#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog struct
 * @d: pointer parameter
 * Return: void
 */
void print_dog(struct dog *d)
{
    if (!d)
    {
    return;
    }

    char *name = d->name ? d->name : "(nil)";
    char *owner = d->owner ? d->owner : "(nil)";

    printf("Name: %s\n", name);
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", owner);
}
