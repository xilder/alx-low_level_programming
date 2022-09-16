#include "main.h"
#include <stdio.h>

/**
 * print_square - prints numbers from 0 to 9
 * @size: number of underscore
 * Return: returns 0 or 1
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
