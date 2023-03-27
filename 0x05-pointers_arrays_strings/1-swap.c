#include "main.h"
#include <stdio.h>
/**
 * swap_int - Entry point
 * @a: integer
 * @b: integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
