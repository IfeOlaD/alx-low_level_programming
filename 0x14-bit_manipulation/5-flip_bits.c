#include "main.h"

/**
 * flip_bits - returns the number of bits you need to flip
 * @n: first number
 * @m: second number
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int count = 0;

while (x)
{
count += x & 1;
x >>= 1;
}
return (count);
}
