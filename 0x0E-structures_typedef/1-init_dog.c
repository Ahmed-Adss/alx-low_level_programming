#include "dog.h"


/**
*init_dog- define a new type of var
*@d: input pointer
*@name: struct name
*@age: dog age
*@owner: dog owner name
*Return: always 0
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}







}
