#include "main.h"
#include <stdio.h>
/**
 * _strcat - to concatenate strings
 * @dest: string to be added to
 * @src: string added
 * Return: returns conatenated word
 */

char *_strcat(char *dest, char *src)
{
	int i, n = 0;
	
	while (dest[n] != '\0')
	{
		n++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n++] = src[i];
	}
	return (dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

	printf("%s\n", s1);
			    printf("%s", s2);
			        ptr = _strcat(s1, s2);
				    printf("%s", s1);
				        printf("%s", s2);
					    printf("%s", ptr);
					        return (0);
}
