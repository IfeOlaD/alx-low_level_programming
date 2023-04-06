#include "main.h"

/**
 * factorial - Returns facrorial of a given number
 * @n: the integer]
 * Return: 0
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else
{
return (n * factorial(n - 1));
}
}
