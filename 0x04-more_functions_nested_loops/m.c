#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints numbers from 0 to 9
 * @size: number of triangles
 * Return: returns 0 or 1
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

int main(void)
{
	print_triangle(2);
	print_triangle(-1);
	print_triangle(10);
}
