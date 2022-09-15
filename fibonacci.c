#include <stdio.h>

int main(void)
{
	while (1)
	{
		int n;
		printf("How long would you like this fibonacci series to be:\n");
		scanf("%d", &n);
		int fibb1 = 0;
		int fibb2 = 1;
		int sum;
		int i;

		printf("%d, %d", fibb1, fibb2);
		for (i = 0; i < n; i++)
		{
			sum = fibb1 + fibb2;
			fibb1 = fibb2;
			fibb2 = sum;
			printf(", %d", sum);
		}
		printf(".\n");
	}
	return (0);
}
