#include "main.h"

/**
 * _strcmp - to compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns an integer depending on the the function
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, n = 0;

	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[i] != '\0')
	{
		i++;
	}

	return (n - i);
}
