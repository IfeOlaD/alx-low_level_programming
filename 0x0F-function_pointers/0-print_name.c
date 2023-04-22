#include <stdio.h>

/**
 * print_name - a function that prints name
 * @name: the name to be printed
 * @f: the function
 * Return: 0
 */

void print_name(char *name, void(*f)(char *))
{
f(name);
}
