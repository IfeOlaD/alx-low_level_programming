#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print numbers
 * @separator: the string printed between numbers
 * @n: the unsigned int
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int a;
int num;

va_start(args, n);
for (a = 0; a < n; a++)
{
num = va_arg(args, int);
printf("%d", num);
if (a != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
