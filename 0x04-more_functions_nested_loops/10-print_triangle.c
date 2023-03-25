#include "main.h"

/**
 * print_triangle - Entry point
 * @size: the size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
int a;
int b;
int c;
if (size <= 0)
{
_putchar('\n');
return ();
}
for (a = 1; a <= size; a++)
{
for (b = 0; b < size - 1; b++)
_putchar(' ');
for (c = 0; c < a; c++)
_putchar('#');
_putchar('\n');
}
}
