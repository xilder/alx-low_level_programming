#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list list;

	va_start (list, n);

	sum = 0;
	for i = 0; i < count; i++)
		sum += va_arg (ap, int);

	va_end (list);
	return sum;
}
