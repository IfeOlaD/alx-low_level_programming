#include "main.h"
/**
 * _sqrt_recursion - prints the square root of given number
 * @n: the first int
 *
 * Return: 0
 */

int _sqrt_recursion(int n, int a)
{
if (a * a == n)
{
return (a);
}
else if (a * a > n)
{
return (-1);
}
else
{
return (_sqrt_recursion(n, a + a));
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
return (_sqrt_recursion(n, 0));
}
}
