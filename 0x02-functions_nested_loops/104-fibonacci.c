#include <stdio.h>
/**
 * main - print 98 fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	unsigned long int a, b, c;
	int i;

	a = 0;
	b = 1;
	for (i = 1; i < 99; i++)

	{
		c = a + b;
		if (i != 98)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu", c);
		}
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
