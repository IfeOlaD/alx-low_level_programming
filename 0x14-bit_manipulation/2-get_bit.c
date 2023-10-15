#include "main.h"

/**
 * get_bit - a function that returns the value of a bit bit at given index
 * @n: number to get bit from
 * @index: indx of thr bit you wabt to get
 * Return: the value of the bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
return ((n >> index) & 1);
}
