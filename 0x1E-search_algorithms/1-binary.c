#include "search_algos.h"
/**
 * binary_search - searches to find value in array and return the index
 * @array: array to search for the value
 * @size: size of array searched from
 * @value: value to search for in the array
 * Return: index of value or -1 if thr value not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return (-1);
}
