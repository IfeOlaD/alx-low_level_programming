#include "main.h"

/**
 * _pow_recursion - prints x to thr power of y
 * @x: the first integer
 * @y: the second integer
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
