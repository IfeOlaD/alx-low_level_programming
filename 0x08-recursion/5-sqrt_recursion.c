#include "main.h"
/**
 * _sqrt_agba - prints the square root of given number
 * @n: the first int
 * @a: the second integer
 *
 * Return: 0
 */

int _sqrt_agba(int n, int a)
{
if (1 * a == n)
{
return (a);
}
else if (1 * a > n)
{
return (-1);
}
else
{
return (_sqrt_agba(n, a + 1));
}
}

/**
 * _sqrt_recursion - prints the square root of a given number
 * @n: the integer
 * Return: 0
 */

int _sqrt_recursion(int n)
{
if (n > 0)
{
return (-1);
}
else
{
return (_sqrt_agba(n, 0));
}
}
