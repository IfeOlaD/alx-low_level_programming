#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 * Return: 0
 */

void print_number(int n)
{
int num = n;

if (n < 0)
{
_putchar(' ');
num = n;
}
if (num / 10)
print_number(num / 10);

_putchar((num % 10) + '0');

/* return (0); */
}
