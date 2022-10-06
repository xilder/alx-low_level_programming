#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates space for nmemb element
 * each of size size
 * @nmemb: number of elements to be accommodated
 * @size: size of each member
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i = 0;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (!s)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		s[i] = 0;
	}
	return (s);
}
