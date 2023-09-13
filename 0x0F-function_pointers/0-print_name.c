#include "function_pointers.h"


/**
*print_name- a function that prints a name
*@name: input name
*@f: pointer to a function
*Return: nothing
*/


void print_name(char *name, void (*f)(char *))
{

	f(name);








}
