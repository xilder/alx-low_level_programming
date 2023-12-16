#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the array to searched
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value if found else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
