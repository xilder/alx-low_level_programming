#include "main.h"
/**
 * print_number - prints an integer.
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int divisor = 1, i, resp;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (i = 0; n / divisor > 9; i++)
	{
		divisor *= 10;
	}

	for (; divisor >= 1; divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
		n %= divisor;

	}

}

int main(void)
{
	    print_number(98);
	        _putchar('\n');
		    print_number(402);
		        _putchar('\n');
			    print_number(1024);
			        _putchar('\n');
				    print_number(0);
				        _putchar('\n');
					    print_number(-98);
					        _putchar('\n');
						    return (0);
}
