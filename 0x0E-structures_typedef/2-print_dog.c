#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - dog profile.
 * @d: dog struct.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
