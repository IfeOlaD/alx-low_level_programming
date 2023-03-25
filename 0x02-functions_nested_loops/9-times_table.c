#include "main.h"

/**
 * times_table - Entry point
 *
 *
 * Return: 0
 */

void times_table(void)
{
int a;
int b;
int multi;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
multi = a * b;
if (b != 0)
_putchar(' ');
if (multi >= 10)
_putchar(multi / 10 + '0');
else if (b != 0)
_putchar(' ');
_putchar(multi % 10 + '0');
if (b != 9)
_putchar(',');
}
_putchar('\n');
}
}
