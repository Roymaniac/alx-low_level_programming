#include "search_algos.h"

/**
 * linear_search - Uses a linear search algorithm to find a value in an array
 * @array: pointer to first element of array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index of value, or -1 if array is NULL or value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
