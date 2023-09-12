#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void print_dog(struct dog *d)
{
	if( d == NULL) printf();
	if (d->name == NULL)
	{
		printf("Name: (nill)\n");
	} else if (d->age == '')
	{
		printf("Age: (nill)\n");
	}else if (d->owner == NULL)
	{
		printf("Owner: (nill)\n");
	}
	printf("Name: %s\n",d->name);
	printf("Age: %f\n",d->age);
	printf("Owner: %s\n",d->owner);





}
