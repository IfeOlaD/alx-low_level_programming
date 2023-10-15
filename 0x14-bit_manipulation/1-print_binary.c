#include "main.h"

/**
 * print_binary - a function that prints the binary of input numbers
 * @n: the input numbers
 * Return: 0
 */

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
putchar((n & 1) + '0');
}
