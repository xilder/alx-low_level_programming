#include <stdio.h>
#include "main.h"

int main(void)
{
	int a, b, c;
	int largest;

	a = -5;
	b = 0;
	c = 100;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
