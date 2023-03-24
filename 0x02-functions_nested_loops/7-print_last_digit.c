#include "main.h"

/**
* print_last_digit - prints the last digit
*
* @n: the integer to be declared
*
* Return: o
*/

int print_last_digit(int n)
{
int c = n % 10;
if (c < 0)
c = -c;
_putchar(c + '0');
return (c);
}
