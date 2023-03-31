#include "main.h"

/**
 * reverse_array - Reverses array
 * @a: the array
 * @n: the number
 * Return: 0
 */

void reverse_array(int *a, int n)
{
int b;
int temp;
for (b = 0; b < n / 2; b++)
{
temp = a[b];
a[b] = a[n - b - 1];
a[n - b - 1] = temp;
}
}
