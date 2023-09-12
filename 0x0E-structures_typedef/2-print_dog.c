#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nill)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nill)");
	}





}
