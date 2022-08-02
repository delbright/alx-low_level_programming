#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of struct dog type
 *@d: array
 *@name: Name
 *@age: Age
 *@owner: Owner
 * Description: This structure is for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
