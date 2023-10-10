#include "search_algos.h"
/**
 * linear_search - searches to find value in array and return the index
 * @array: array to search for the value
 * @size: size of array searched from
 * @value: value to search for in the array
 * Return: index of value or -1 if thr value not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
