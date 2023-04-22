#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * print_all - prints all types of arguments
 * @format: the list of all types of arguments passed into the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
va_list vl;
char *string;
int a = 0;

va_start(vl, format);
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%c", (char) va_arg(vl, int));
break;
case 'i':
printf("%i", va_arg(vl, int));
break;
case 'f':
printf("%f", va_arg(vl, double));
break;
case 's':
string = va_arg(vl, char *);
if (string == NULL)
printf("(nil)");
printf("%s", string);
break;
}
a++;
}
printf("\n");
va_end(vl);
}
