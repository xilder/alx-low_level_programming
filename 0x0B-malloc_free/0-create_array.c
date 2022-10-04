#include "main.h"

/**
 * create_array - it creates an array of chars and initialises
 *
 * @size: size of the array to be crated
 * @c: the specific char
 * Return: returns a char
 */

char *create_array(unsigned int size, char)
{
	unsigned int i = 0;
	char *p;

	if (size <= 0)
		return ('\0');
	p = (char *) malloc(sizeof(char) * size);
	if (p == '\0')
		return (0);

	while ( i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
