
/**
 * print_dog - dog profile.
 * @d: dog struct.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
