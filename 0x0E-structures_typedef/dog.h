#ifndef DOG_H
#define DOG_H
/**
*struct dog- define a new type struct dog with the following elements
*@name: dog name
*@age: dog age
*@owner: dog owner
*Return: always success 0
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
