#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialise dog struct
 * @d: pointer to struct
 * @name: dog name
 * @age: age of dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
