#include <stdio.h>
/**
 * main - first 50 fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	unsigned long int a, b, c, d;
	int i;

	a = 0;
	b = 1;
	do
	{
		c = a + b;
		a = b;
		b = c;
		if ((c % 2) == 0)
			d += c;
	} while (c < 4000000);
	printf("%lu\n", d);
	return (0);
}
