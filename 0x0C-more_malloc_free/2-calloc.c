#include "main.h"
#include < stdio.h>
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 *
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	b = malloc(l);

	if (b == NULL)
		return (NULL);

	while (i < l)
	{
		b[i] = 0;
		i++;
	}

	return (b);
}
