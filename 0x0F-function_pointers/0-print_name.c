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

/**
 * print_my_name - the function
 * @name: the name to be printed
 * Return: 0
 */

void print_my_name(char *name)
{
int a;
for (a = 0; name[a]; a++)
{
printf("%c", name[a]);
}
printf("\n");
}

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
print_name("Legend", print_my_name);
return (0);
}
