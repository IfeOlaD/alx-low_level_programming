#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14, 10 times
 * Return: 0
 */

void more_numbers(void)
{
int c;
int b;
for (c = 0; c < 10; c++)
{
for (b = 0; b <= 14; b++)
{
if (b >= 10)
{
_putchar(b / 10 + '0');
}
_putchar(b % 10 + '0');
}
_putchar('\n');
}
}
