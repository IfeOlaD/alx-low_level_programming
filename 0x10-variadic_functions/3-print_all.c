#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
while (format != NULL && format[a] != '\0')
{
switch (format[a])
{
case 'i':
printf("%i", va_arg(vl, int));
break;
case 'f':
printf("%lf", va_arg(vl, double));
break;
case 'c':
printf("%c", (char) va_arg(vl, int));
break;
case 's':
string = va_arg(vl, char *);
if (string == NULL)
{
printf("(nil)");
break;
}
printf("%s", string);
break;
}
if ((format[a] == 'c' || format[a] == 'i' || format[a] == 'f'
|| format[a] == 's') && format[(a + 1)] != '\0')
printf(", ");
a++;
}
printf("\n");
va_end(vl);
}
