#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: This function initializes the struct dog variable by assigning
 *              the provided name, age, and owner values
 *              to its corresponding members.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name ? name : "";
	d->age = age;
	d->owner = owner ? owner : "";
}



