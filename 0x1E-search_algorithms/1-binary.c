#include "search_algos.h"

/**
 * binary_search - use binary search to find a number in an array
 * @array: pointer to first element in array to search
 * @size: size of array
 * @value: value to find
 *
 * Return: index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (bin_search_recursive(array, 0, size, value));
}

/**
 * bin_search_recursive - recursively use binary search to find a number
 * @array: pointer to first element in array to search
 * @start: start index
 * @end: end index
 * @value: value to find
 *
 * Return: index of value or -1 if not found
 */
int bin_search_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;
	char *delim;

	if (start >= end)
		return (-1);
	mid = (end - start - 1) / 2 + start;
	printf("Searching in array:");
	delim = " ";
	for (i = start; i < end; i++)
	{
		printf("%s%d", delim, array[i]);
		delim = ", ";
	}
	printf("\n");
	if (value == array[mid])
		return (mid);
	if (value > array[mid])
		return (bin_search_recursive(array, mid + 1, end, value));
	return (bin_search_recursive(array, start, mid, value));
}
