#include "search_algos.h"
/**
 * bs_helper - recursive functionto get value
 * @left: begininning of array
 * @right: end of array
 * @value: value to be checked
 * @array: array
 *
 * Return: returns the index if found else -1
 */

int bs_helper(int *array, size_t left, size_t right, int value)
{
	size_t i;
	size_t mid;

	mid = (left + right) / 2;
	printf("Searching in array: %i", array[left]);
	if (left != right)
	{
		for (i = left + 1; i <= right; i++)
			printf(", %i", array[i]);
	}
	printf("\n");
	if (left >= right && value != array[left])
		return (-1);
	if (value == array[mid])
		return (mid);
	else if (value < array[mid])
		return (bs_helper(array, left, mid - 1, value));
	else
		return (bs_helper(array, mid + 1, right, value));
}

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the array to searched
 * @size: size of the array
 * @value: value to be found
 *
 * Return: index of value if found else -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (bs_helper(array, 0, size - 1, value));
}
