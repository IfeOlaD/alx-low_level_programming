#include <stdio.h>

/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 Succes
*/

void print_alphabet_x10(void)
{
int b;
int c;

for (b = 0; < 10; b++)
{
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
}
}
