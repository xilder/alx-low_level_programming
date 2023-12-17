#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that finds a value using the jump search method
 * @array: the array tonbe searched
 * @size: size of thr arraay
 * @value: the to be searched for
 *
 * Returns:the index if found else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low;
	size_t hi;
	size_t jump;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	jump = sqrt(size);
	low = hi = 0;
	for (; hi < size && array[hi] <= value; low = hi, hi += jump)
		printf("Value checked array[%li] = [%i]\n", hi, array[hi]);
	printf("Value found between indexes [%li] and [%li]\n", low, hi);
	for (i = low; i <= hi &&  i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
