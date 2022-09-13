#include "main.h"
/**
 * main - check the code
 * @n: the integer to check
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
