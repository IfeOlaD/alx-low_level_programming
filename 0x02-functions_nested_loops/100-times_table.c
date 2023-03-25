#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: the integer
 * Return: 0
 */

void print_times_table(int n)
{
int a;
int b;
int multi;
if (n < 0 || n > 15)
return;

for (a = 0; a <= n; a++)
{
for (a = 0; b <= n; b++)
{
multi = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
if (multi < 10)
_putchar(' ');
if (multi < 100)
_putchar(' ');
}
if (multi >= 100)
_putchar(multi / 100 + '0');
if (multi >= 10)
_putchar((multi / 10) % 10 + '0');
_putchar(multi % 10 + '0');
}
_putchar('\n');
}
}
