#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   printf("%p\n", p);
   c = 'H';
   printf("%c\n", c);
   modif_my_char_var(p, c);
   printf("%p and %c\n", p, c);
   return (0);
}
