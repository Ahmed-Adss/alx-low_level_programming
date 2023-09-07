#include "main.h"
#include <stdlib.h>

/**
*malloc_checked: a function that allocates memory using malloc
*@b: unsigned int
*return: always 0
*/


void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        exit(EXIT_FAILURE);
    }

    return ptr;
}
