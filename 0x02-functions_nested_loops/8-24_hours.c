#include "main.h"
/**
 * jack_bauer - check the code
 * Return: always false
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2' ; i++)
	{
		for (j = '0'; j <= '9' ; j++)
		{
			for (k = '0'; k <= '5' ; k++)
			{
				for (l = '0'; l <= '9' ; l++)
				{
					if (i == '2' && j == '4')
					{
						return;
					}
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
