#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - Alllocates memory 
 *@b: the size to allocate
 *
 *Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
