#include "main.h"

/**
 * _isdigit - checks if an int is a digit
 * @c: thr character to check
 * Return: 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
