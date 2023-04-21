#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: the string printed between strings
 * @n: the unsigned int
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int a;
char *str;

va_start(args, n);
for (a = 0; a < n; a++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (a != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
