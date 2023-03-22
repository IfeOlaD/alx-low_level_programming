#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 Succes
*/

void print_alphabet_x10(void)
{
int b = 0;
char c;

while (b <= 9)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
