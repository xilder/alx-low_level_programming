#include "main.h"
/**
 * print_last_digit - check the code
 * @n: the integer to check
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
