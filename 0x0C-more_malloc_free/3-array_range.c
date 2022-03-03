#include "main.h"
#include<stdlib.h>
#include <stdio.h>

/**
 * array_range - ...
 * @min: ...
 * @max: ...
 *
 * Return: ...
 */
int *array_range(int min, int max)
{
	unsigned int i = 0, k = 0, j = 0;
	char *p;

	if (min > max)
		return (NULL);

	P = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}

	return (p);
}
