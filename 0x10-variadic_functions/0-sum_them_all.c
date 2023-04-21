#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums all the variable passed into it
 * @n: the constant unsigned int
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int a;
va_list valist;

va_start(valist, n);

for (a = 0; a < n; a++)
sum = sum + va_arg(valist, int);

va_end(valist);

return (sum);
}
