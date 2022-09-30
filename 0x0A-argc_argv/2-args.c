#include "main.h"
#include <stdio.h>

/**
 * main - prints each argument followed by a new line
 * @argc: number of arguments to be passed
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv)
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
