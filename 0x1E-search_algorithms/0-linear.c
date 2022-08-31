#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *	using the Linear search algorithm.
 *
 * @array: The array of integers.
 * @size: The size of the array.
 * @value: The value to search.
 *
 * Return: Sought value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
