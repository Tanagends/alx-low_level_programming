#include "dog.h"
/**
 * init_dog - dog profile.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 * @d: struct.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
