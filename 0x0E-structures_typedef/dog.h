#ifndef DOG_H
#define DOG_H
/**
*struct dog- define a new type of var
*@name: struct name
*@age: dog age
*@owner: dog owner name
*Return: always 0
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};












void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
