#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * @n: the integer
 * Return: o
 */

void print_to_98(int n)
{
int a;
if (n < 98)
{
for (a = n; a <= 98; a++)
{
printf("%d", a);
if (a != 98)
printf(", ");
}
}
else
{
for (a = n; a >= 98; a--)
{
printf("%d", a);
if (a != 98)
printf(", ");
}
}
printf("\n");
}
