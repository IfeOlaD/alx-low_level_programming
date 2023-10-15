#include "main.h"

/**
 * set_bit - set the value of bit to 1 at a particular index
 * @n: number to set bit in
 * @index: index of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
*n = (*n | m);
return (1);
}
