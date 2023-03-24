#include "main.h"

/**
* print_last_digit - prints the last digit
*
*
*
* Return: o
*/

int print_last_digit(int)
{
int c = n % 10;
if (c < 10)
c = -c;
_putchar(c + '0');
return (c);
}
