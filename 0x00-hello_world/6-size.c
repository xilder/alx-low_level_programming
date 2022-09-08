#include <stdio.h>
/**
 * main - puts out "with proper grammar, but the outcome is a piece of art"
 * Return: ends function
 */
int main(void)
{
	prinf("Size of a char: %d byte(s)\n", sizeof(char));
	prinf("Size of a int: %d byte(s)\n", sizeof(int));
	prinf("Size of a long int: %d byte(s)\n", sizeof(long int));
	prinf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	prinf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
