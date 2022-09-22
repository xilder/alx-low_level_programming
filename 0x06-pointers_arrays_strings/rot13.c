#include "main.h"
#include <stdio.h>

/**
 * leet - encrypts a string
 * @s: string to be passed
 * Return: a string that satisfies the function
 */

char *rot13(char *s)
{
	int i, j;
	char n[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char m[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	printf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%c\n", s[i]);
		for (j = 0; n[j] != '\0'; j++)
		{
			if (s[i] == n[j])
			{
				printf("%c, %c\n", n[j], m[j]);
				s[i] = m[j];
			}
		}
		j = 0;
	}
	return (s);
}
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
/**    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    */
    return (0);
}
